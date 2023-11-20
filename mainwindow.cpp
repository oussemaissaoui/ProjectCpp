#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "piece.h"
#include "smtp.h"
#include <QValidator>
#include <QIntValidator>
#include <QMessageBox>
#include <QtDebug>
#include<QTabWidget>
#include <QtCharts>
#include <QChart>
#include <QSqlQuery>
#include <QSqlError>
#include<QDoubleValidator>
#include <QSortFilterProxyModel>
#include <QSqlRecord>
#include <QPrinter>
#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>
#include <qcustomplot.h>
#include <QSslSocket>
class NoNumberValidator : public QValidator {
public:
    QValidator::State validate(QString &input, int &pos) const override {
        Q_UNUSED(pos);
        for (const QChar &ch : input) {
            if (ch.isDigit()) {
                return QValidator::Invalid;
            }
        }

        return QValidator::Acceptable;
    }
};
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Piece P;
    ui->setupUi(this);
    ui->lineEdit_nb_pieces_2->setValidator(new QIntValidator(0,9999,this));
    ui->lineEdit_prix_unit_2->setValidator(new QIntValidator(0,9999,this));
    NoNumberValidator *validator = new NoNumberValidator;
    ui->lineEdit_Categorie_2->setValidator(validator);
    ui->lineEdit_Marque_2->setValidator(validator);
    ui->lineEdit_Fournisseur_2->setValidator(validator);
    ui->tab_piece->setModel(P.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Valider_2_clicked()
{
    QString REFERENCE=ui->lineEdit_Reference_2->text();
    QString CATEGORIE=ui->lineEdit_Categorie_2->text();
    QString FOURNISSEUR=ui->lineEdit_Fournisseur_2->text();
    QString MARQUE=ui->lineEdit_Marque_2->text();
    int NB_PIECE=ui->lineEdit_nb_pieces_2->text().toInt();
    int PRIX_UNIT=ui->lineEdit_prix_unit_2->text().toInt();
    Piece P(REFERENCE,CATEGORIE,FOURNISSEUR,MARQUE,NB_PIECE,PRIX_UNIT);
    QMessageBox msgBox;
    bool test=P.ajouter();
    if (test)
    {
        msgBox.setText("Ajout avec succes");
        ui->tab_piece->setModel(P.afficher());
        ui->lineEdit_Reference_2->clear();
        ui->lineEdit_Categorie_2->clear();
        ui->lineEdit_Fournisseur_2->clear();
        ui->lineEdit_Marque_2->clear();
        ui->lineEdit_nb_pieces_2->clear();
        ui->lineEdit_prix_unit_2->clear();
    }
    else
    {
        msgBox.setText("Echec d Ajout");

     }
    msgBox.exec();
}

void MainWindow::on_pushButton_Supprimer_clicked()
{
    Piece P1;
    P1.setreference(ui->lineEdit_Reference2->text());
    bool test=P1.supprimer(P1.get_reference());
    QMessageBox msgBox;
    if (test)
    {
        msgBox.setText("Suppression avec succes");
        ui->tab_piece->setModel(P1.afficher());
        ui->lineEdit_Reference2->clear();
    }
    else
        msgBox.setText("Echec de Suppression");
        msgBox.exec();


    ui->tab_piece->setModel(P1.afficher());
}

void MainWindow::on_pushButton_Modifier_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM piece WHERE REFERENCE=:REFERENCE  ");
    query.bindValue(":REFERENCE", ui->lineEdit_Modification->text());
    query.exec();
    model->setQuery(query);
    if (model->rowCount() > 0)
    {
        QString REFERENCE=ui->lineEdit_Modification->text();
        QString CATEGORIE=ui->lineEdit_Categorie_3->text();
        QString FOURNISSEUR=ui->lineEdit_Fournisseur_3->text();
        QString MARQUE=ui->lineEdit_Marque_3->text();
        int NB_PIECE=ui->lineEdit_nb_pieces_3->text().toInt();
        int PRIX_UNIT=ui->lineEdit_prix_unit_3->text().toInt();
        Piece P(REFERENCE,CATEGORIE,FOURNISSEUR,MARQUE,NB_PIECE,PRIX_UNIT);
        ui->lineEdit_Modification->clear();
        ui->lineEdit_Categorie_3->clear();
        ui->lineEdit_Fournisseur_3->clear();
        ui->lineEdit_Marque_3->clear();
        ui->lineEdit_nb_pieces_3->clear();
        ui->lineEdit_prix_unit_3->clear();
        bool test=P.modifier(REFERENCE);
        if (test){
        ui->tab_piece->setModel(P.afficher());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                     QObject::tr("Modification Effectué\n"
                                                 "Click Cancel to exit"),QMessageBox::Cancel);
        }
        else{
             ui->tab_piece->setModel(P.afficher());
            QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                                          QObject::tr("Modification Echoué.\n"
                                                      "Clic Cancel to exit."),QMessageBox::Cancel);
        }
    }
}

void MainWindow::on_pushButton_Chercher_3_clicked()
{
    QString valeur = ui->lineEdit_Reference_3->text();
    Piece *p = new Piece();
    QMessageBox msgBox;
    QSqlQueryModel *resultModel = p->rechercherPiece(valeur);
    if (resultModel->rowCount() > 0) {
         msgBox.setText("Pièce trouvée");
         ui->TableViewPieceRecherche->setModel(resultModel);
         msgBox.exec();
     } else {  
           msgBox.setText("Pièce non trouvée");
           msgBox.exec();
       }
    ui->lineEdit_Reference_3->clear();
}

void MainWindow::on_pushButton_Trier_clicked()
{
    Piece *p= new Piece();
    ui->TableViewPieceTri->setModel(p->trierPiece());
}
void MainWindow::on_pushButton_statistiques_clicked()
{

    Piece p;
    QSqlQueryModel *model = p.afficher();
        int total_pieces = model->rowCount();
        int total_pneus = 0;
        int total_feux = 0;
        int total_batteries=0;
        int total_climatiseurs=0;


        // Calculer le nombre de pieces selon la categorie
        for (int row = 0; row < total_pieces; ++row) {
            QString categorie = model->data(model->index(row, 1)).toString(); // Supposant que la colonne 1 est pour "CATEGORIE"

            if (categorie.toLower() == "pneus") {  // Utilisez toLower() pour être insensible à la casse
                total_pneus++;
            } else if (categorie.toLower() == "feux") {
                total_feux++;
            }else if (categorie.toLower() == "batteries") {
                total_batteries++;
            }else if (categorie.toLower() == "climatiseurs") {
                total_climatiseurs++;
            }
        }

        // Calcul du pourcentage des animaux en bonne santé parmi tous les animaux
        double pourcentagePneus = (total_pieces > 0) ? ((double)total_pneus / total_pieces) * 100 : 0;
        double pourcentageFeux = (total_pieces > 0) ? ((double)total_feux / total_pieces) * 100 : 0;
        double pourcentageBatteries = (total_pieces > 0) ? ((double)total_batteries / total_pieces) * 100 : 0;
        double pourcentageClimatiseurs= (total_pieces > 0) ? ((double)total_climatiseurs / total_pieces) * 100 : 0;

        // Créer un objet QPieSeries pour stocker les données du graphique
        QPieSeries *series = new QPieSeries();
        QPieSlice *slicePneus = new QPieSlice("Pneus", pourcentagePneus);
        QPieSlice *sliceFeux = new QPieSlice("Feux", pourcentageFeux);
        QPieSlice *sliceBatteries = new QPieSlice("Batteries", pourcentageBatteries);
        QPieSlice *sliceClimatiseurs = new QPieSlice("Climatiseurs", pourcentageClimatiseurs);

        // Attribuer des couleurs spécifiques aux tranches
        slicePneus->setColor(QColor("#00FF00")); // Vert pour Pneus
        sliceFeux->setColor(QColor("#FF0000"));  // Rouge pour Feux
        sliceBatteries->setColor(QColor("#0000FF")); // Bleu pour Batteries
        sliceClimatiseurs->setColor(QColor("#0F0F00"));  // Noir pour Climatiseurs

        // Ajouter les pourcentages aux labels des parts
        slicePneus->setLabel(QString("%1%").arg(pourcentagePneus, 0, 'f', 2));
        sliceFeux->setLabel(QString("%1%").arg(pourcentageFeux, 0, 'f', 2));
        sliceBatteries->setLabel(QString("%1%").arg(pourcentageBatteries, 0, 'f', 2));
        sliceClimatiseurs->setLabel(QString("%1%").arg(pourcentageClimatiseurs, 0, 'f', 2));

        series->append(slicePneus);
        series->append(sliceFeux);
        series->append(sliceBatteries);
        series->append(sliceClimatiseurs);

        // Créer un objet QChart pour le graphique
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Statistiques des Pièces de Rechange");

        // Ajouter une légende personnalisée
        chart->legend()->setVisible(true);
        chart->legend()->setAlignment(Qt::AlignRight);

        // Créer un objet QChartView pour afficher le graphique
        QChartView *chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing); // Activer l'antialiasing pour des graphiques plus lisses

        // Créer une nouvelle QDialog pour afficher le graphique
        QDialog *chartDialog = new QDialog(this);
        chartDialog->setFixedSize(800, 600); // Ajuster la taille en conséquence

        QVBoxLayout *layout = new QVBoxLayout(chartDialog);
        layout->addWidget(chartView);

        // Bouton pour fermer la fenêtre de statistiques
        QPushButton *closeButton = new QPushButton("Fermer", chartDialog);
        connect(closeButton, &QPushButton::clicked, chartDialog, &QDialog::close);
        layout->addWidget(closeButton);

        // Afficher la fenêtre
        chartDialog->exec();
}

void MainWindow::on_pushButton_PDF_clicked()
{
        QString cheminFichier = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "Fichiers PDF (*.pdf)");

            if (!cheminFichier.isEmpty())
            {
                QPrinter printer(QPrinter::PrinterResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setOutputFileName(cheminFichier);

                QPainter painter;
                painter.begin(&printer);

                // Charger l'image depuis le fichier
                QImage image("C:/ESPRIT/2ème année/Projet/Logo_C++.png");

                // Dessiner l'image sur la page PDF
                int imageWidth=45;
                int imageHeight=60;
                painter.drawImage(QRect(25, 5, imageWidth, imageHeight), image);

                // Définir la couleur de fond de l'en-tête en gris
                painter.fillRect(0, 80, 575, 20, Qt::gray);

                // Définir la couleur du texte en vert
                painter.setPen(Qt::green);

                // Dessiner le texte "Liste des Pièces de Rechange" en grand au milieu de la page
                QFont font = painter.font();
                font.setPointSize(22); // Taille de police plus grande
                painter.setFont(font);

                // Centrer le texte horizontalement
                int textWidth = painter.fontMetrics().width("Liste des Pièces de Rechange");
                int x = (600 - textWidth) / 2; // Assurez-vous que 600 est la largeur de votre page
                painter.drawText(x, 50, "Liste des Pièces de Rechange");

                // Réinitialiser la couleur du texte
                painter.setPen(Qt::black);
                // Dessinez le titre et l'en-tête du tableau
                font.setPointSize(14); // Taille de police plus grande
                painter.setFont(font);
                painter.drawText(25, 95, "Référence");
                painter.drawText(100, 95, "Catégorie");
                painter.drawText(185, 95, "Fournisseur");
                painter.drawText(270, 95, "Marque");
                painter.drawText(360, 95, "Nombre de Pièces");
                painter.drawText(480, 95, "Prix Unitaire");

                Piece p;
                QSqlQueryModel *model = p.afficher();
                int rowHeight = 20;
                int startY = 120;
                for (int row = 0; row < model->rowCount(); ++row)
                        {
                            QSqlRecord record = model->record(row);

                            painter.drawText(25, startY, record.value("REFERENCE").toString());
                            painter.drawText(100, startY, record.value("CATEGORIE").toString());
                            painter.drawText(185, startY, record.value("FOURNISSEUR").toString());
                            painter.drawText(270, startY, record.value("MARQUE").toString());
                            painter.drawText(410, startY, QString::number(record.value("NB_PIECE").toInt()));
                            painter.drawText(480, startY, QString::number(record.value("PRIX_UNIT").toInt()));

                            startY += rowHeight;
                        }
                 painter.end();

              }
}
void   MainWindow::sendMail()
{
   /*smtp* emailSender = new smtp("nesrine.fezzani@esprit.tn",ui->lineEdit_Fournisseur->text(), "smtp.gmail.com");
    connect(emailSender, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
    emailSender->sendMaile("nesrine.fezzani@esprit.tn", ui->lineEdit_Fournisseur->text() , ui->lineEdit_ObjetMail->text(),ui->lineEdit_texte->text());*/
    smtp* sender = new class smtp (ui->lineEdit_Employe->text(), ui->lineEdit_MDP->text(), ui->lineEdit_Serveur->text(),ui->lineEdit_port_serveur->text().toUShort());
    connect(sender, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
    sender->sendMaile(ui->lineEdit_Employe->text(), ui->lineEdit_Fournisseur->text() , ui->lineEdit_ObjetMail->text(),ui->plainTextEdit->toPlainText());
}
void   MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    /*ui->lineEdit_Fournisseur->clear();
    ui->lineEdit_ObjetMail->clear();
    ui->plainTextEdit->clear();
    ui->lineEdit_Fournisseur->clear();*/
}
void MainWindow::on_sendBtn_clicked()
{
    sendMail();
}

void MainWindow::on_pushButton_quantite_clicked()
{
    Piece p;
    QSqlQueryModel* model=new QSqlQueryModel();
        int total_pieces = model->rowCount();
        int total_pneus = 0;
        int total_feux = 0;
        int total_batteries=0;
        int total_climatiseurs=0;

        // Calculer le nombre de pieces selon la categorie
        for (int row=0; row < total_pieces; ++row) {
            QString categorie = model->data(model->index(row, 1)).toString();// Supposant que la colonne 1 est pour "CATEGORIE"

            if (categorie.toLower() == "pneus") {  // Utilisez toLower() pour être insensible à la casse
                total_pneus++;
            } else if (categorie.toLower() == "feux") {
                total_feux++;
            }else if (categorie.toLower() == "batteries") {
                total_batteries++;
            }else if (categorie.toLower() == "climatiseurs") {
                total_climatiseurs++;
            }
        }
        //ui->TableViewPieceQuantite->setModel(P.afficher());
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Categorie"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nombre Total de Pieces"));
        model->setHeaderData(1, Qt::Vertical, QObject::tr("Pneus"));
        model->setHeaderData(2, Qt::Vertical, QObject::tr("Feux"));
        model->setHeaderData(3, Qt::Vertical, QObject::tr("Batteries"));
        model->setHeaderData(3, Qt::Vertical, QObject::tr("Climatiseurs"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix Unitaire"));

}
