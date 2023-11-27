#include "dialog.h"
#include "ui_dialog.h"
#include "Facture.h"
#include "arduino.h"
#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QPrinter>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QTextDocument>
#include <QTextStream>
#include <QValidator>
#include <QDebug>

#include <QChart>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QtSql>
using namespace QtCharts;

#include<QDesktopServices>





Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->tableView_facture->setModel(f.affiche());

    ui->lineEdit_id_ajouter->setValidator(new QIntValidator(0,99999999,this));
    ui->lineEdit_montant_ajouter->setValidator(new QRegExpValidator(QRegExp("[0-9]*")));
    ui->lineEdit_type_ajouter->setValidator(new QRegExpValidator(QRegExp("[A-Z,a-z]*")));
    ui->lineEdit_date_ajouter->setInputMask("00/00/0000");

    ui->lineEdit_id_supprimer->setValidator(new QIntValidator(0,99999999,this));

    // Connecter un QTimer à une fonction qui sera appelée toutes les 10 secondes
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(notification()));
        connect(timer, SIGNAL(timeout()), this, SLOT(affiche()));
        timer->start(10000); // temps en millisecondeso


        int ret=A.connect_arduino();
        switch (ret)
        {
        case(0):qDebug()<< "arduino is available and connected to :"<<A.getarduino_port_name();
            break;
        case (1):qDebug()<<"arduino is available but not connected to :"<<A.getarduino_port_name();
            break;
        case (-1):qDebug()<<"arduino is not available";
        }
        QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_ajouter_clicked()
{
    long id=ui->lineEdit_id_ajouter->text().toInt();
    QString type=ui->lineEdit_type_ajouter->text();
    int montant_total=ui->lineEdit_montant_ajouter->text().toInt();
    QString datee=ui->lineEdit_date_ajouter->text();
    int duree=ui->lineEdit_duree_ajouter->text().toInt();


    Facture f(id, montant_total, type, datee, duree);

    bool test=f.ajouter();
    if (test)
    {
      ui->tableView_facture->setModel(f.affiche());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                                 QObject::tr("ajout affectué\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("ajout non affectué.\n"
                                          "Click Cancel to exit"), QMessageBox::Cancel);
}


void Dialog::notification()
{
    int id;
    // Récupérer tous les id de la table
    QSqlQuery query;
    if (query.exec("SELECT ID FROM FACTURE WHERE DURE > 0")) {
        //Récupérer le nombre des id de la table
        QSqlQuery query1;
        if (query1.exec("SELECT COUNT(*) FROM FACTURE WHERE DURE > 0")) {
            int j = 0;
            if (query1.next()) {
                j = query1.value(0).toInt();
            }
            // Parcourir tous les id et mettre à jour la durée pour chaque entité
            int i = 0;
            while (query.next() && i < j) {
                id = query.value(0).toInt();

                // Récupérer la durée pour l'entité avec l'ID donné
                QSqlQuery query2;
                QString res = QString::number(id);
                if (query2.prepare("SELECT DURE FROM FACTURE WHERE ID = :ID")) {
                    query2.bindValue(":ID", res);
                    if (query2.exec() && query2.next()) {
                        int duree = query2.value(0).toInt();

                        // Diminuer la durée de 1 seconde
                        duree--;

                        // Mettre à jour la durée dans la base de données pour cet id
                        QSqlQuery query3;
                        QString res1 = QString::number(duree);
                        if (query3.prepare("UPDATE FACTURE SET DURE = :DURE WHERE ID = :ID")) {
                            query3.bindValue(":DURE", res1);
                            query3.bindValue(":ID", res);
                            if (query3.exec()) {
                                // Vérifier si la durée est terminée et envoyer une notification si c'est le cas
                                if (duree == 0) {
                                    // envoyer une notification
                                    QMessageBox::information(nullptr, QObject::tr("Duree terminée !"),
                                                             QObject::tr("La durée est terminée pour l'entité avec l'ID %1.\n il faut payee!!").arg(id),
                                                             QMessageBox::Ok);
                                     f.supprimer(id);
                               }
                                i++;
                            }
                        }
                    }
                }
            }
        }
    }
}

void Dialog::on_pushButton_modifier_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM FACTURE WHERE ID=:ID  ");
    query.bindValue(":ID", ui->lineEdit_id_modifier->text().toInt());
    query.exec();
    model->setQuery(query);
    cout <<model->rowCount();

    // Check if the model contains any data before calling delete
    if (model->rowCount() > 0) {



        long id=ui->lineEdit_id_modifier->text().toInt();
        QString type=ui->lineEdit_type_modifier->text();
        int montant_total=ui->lineEdit_montant_modifier->text().toInt();
        QString datee=ui->lineEdit_date_modifier->text();
        int duree=ui->lineEdit_duree_modifier->text().toInt();



    Facture f(id, montant_total, type, datee, duree);



        bool test = f.modifier(id);

        if (test){


        ui->tableView_facture->setModel(f.affiche());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                     QObject::tr("Modification effectué\n"
                                                 "Click Cancel to exit"),QMessageBox::Cancel);




        }
        else{
             ui->tableView_facture->setModel(f.affiche());
            QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                                          QObject::tr("Modification non effectué.\n"
                                                      "Clic Cancel to exit."),QMessageBox::Cancel);
        }
    }

    else {
        // Handle the case where the model is empty
        // For example, display an error message
        QMessageBox::critical(nullptr, QObject::tr("ok"),
                                 QObject::tr("le tableau est vide.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel );
         ui->tableView_facture->setModel(f.affiche());
        delete model;
    }
}

void Dialog::on_pushButton_supprimer_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM FACTURE WHERE ID=:ID");
    query.bindValue(":ID", ui->lineEdit_id_supprimer->text().toInt());

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
    }

    model->setQuery(query);

    if (model->rowCount() > 0) {
        long id = ui->lineEdit_id_supprimer->text().toInt();

        bool test = Stmp.supprimer(id);
        if (test) {
            QMessageBox::information(nullptr, QObject::tr("ok"),
                                     QObject::tr("Suppression effectuée. \n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tableView_facture->setModel(f.affiche());
        }
        else {
            QMessageBox::critical(nullptr, QObject::tr("ok"),
                                     QObject::tr("Suppression no effectuée.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tableView_facture->setModel(f.affiche());
        }
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("ok"),
                                 QObject::tr("identifiant non trouvée!!\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_facture->setModel(f.affiche());
    }

    delete model;
}

void Dialog::on_pushButton_2_clicked()
{
    ui->tableView_facture->setModel(f.affiche());
}

void Dialog::on_pushButton_ajouter_2_clicked()
{
    ui->tableView_facture->setModel(f.affiche());
}

void Dialog::on_pushButton_PDF_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg("Liste des FACTURES")
            <<  "</head>\n"
            "<body bgcolor=#CFC4E1 link=#5000A0>\n"
            "<h1>Liste des FACTURES </h1>";

    out << "<table border=1 cellspacing=0 cellpadding=2>\n";
    // headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    out << QString("<th>%1</th>").arg(ui->tableView_facture->model()->headerData(0, Qt::Horizontal).toString()); // id
    out << QString("<th>%1</th>").arg(ui->tableView_facture->model()->headerData(1, Qt::Horizontal).toString()); // type
    out << QString("<th>%1</th>").arg(ui->tableView_facture->model()->headerData(2, Qt::Horizontal).toString()); // dataa
    out << QString("<th>%1</th>").arg(ui->tableView_facture->model()->headerData(3, Qt::Horizontal).toString()); // montant
    out << QString("<th>%1</th>").arg(ui->tableView_facture->model()->headerData(4, Qt::Horizontal).toString()); // duree
    out << "</tr></thead>\n";

    // data table
    QSqlQuery query;
    query.exec("SELECT * FROM FACTURE");
    while (query.next()) {
        out << "<tr>";
        out << QString("<td bkcolor=0>%1</td>").arg(query.value(0).toInt()); // id
        out << QString("<td bkcolor=0>%1</td>").arg(query.value(1).toInt()); // type
        out << QString("<td bkcolor=0>%1</td>").arg(query.value(2).toString()); // datee
        out << QString("<td bkcolor=0>%1</td>").arg(query.value(3).toInt()); // montant
        out << QString("<td bkcolor=0>%1</td>").arg(query.value(4).toInt()); // duree
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
    "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer(QPrinter::PrinterResolution);

    // Vérifier que l'imprimante est valide
    if (!printer.isValid()) {
        qDebug() << "Erreur lors de la création de l'imprimante.";
        delete document;
    }

    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName("Liste_des_FACTURES.pdf");  // Spécifier le nom du fichier ici

    // Vérifier que l'impression se déroule sans erreur
    if (printer.outputFileName().isEmpty()) {
        qDebug() << "Erreur: Le nom du fichier de sortie n'est pas défini.";
        delete document;
    }

    // Afficher le répertoire de travail actuel dans la console
    qDebug() << "Répertoire de travail actuel : " << QDir::currentPath();

    document->print(&printer);
}

void Dialog::on_lineEdit_textChanged(const QString &arg1)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM FACTURE WHERE DATEE = :arg1");
    query.bindValue(":arg1",arg1);
    if (!query.exec()) {
        qWarning() << "Erreur : " << query.lastError().text();

    }

    if (query.next()) {
        //QString resultat = query.value(0).toString();
        ui->tableView_facture->setModel(f.recherche(arg1));
    }
    else if (arg1.isEmpty()) {
     ui->tableView_facture->setModel(f.affiche());
    }


}

void Dialog::on_radioButton_clicked()
{
    ui->tableView_facture->setModel(f.affiche_by_id());
}

void Dialog::on_pushButton_PDF_2_clicked()
{

}

void Dialog::on_pushButton_Statistique_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

        // Compter le nombre de produits dans chaque catégorie de montant
        model->setQuery("SELECT COUNT(*) FROM FACTURE WHERE MONTANT < 40");
        int nb_0_40 = model->record(0).value(0).toInt();

        model->setQuery("SELECT COUNT(*) FROM FACTURE WHERE MONTANT BETWEEN 40 AND 80");
        int nb_40_80 = model->record(0).value(0).toInt();

        model->setQuery("SELECT COUNT(*) FROM FACTURE WHERE MONTANT BETWEEN 80 AND 100");
        int nb_80_100 = model->record(0).value(0).toInt();

        model->setQuery("SELECT COUNT(*) FROM FACTURE WHERE MONTANT > 100");
        int nb_100plus = model->record(0).value(0).toInt();

        // Calculer le total
        float total = nb_0_40 + nb_40_80 + nb_80_100 + nb_100plus;

        // Calculer le pourcentage de chaque catégorie de montant
        float pourcentage_0_40 = (nb_0_40 * 100) / total;
        float pourcentage_40_80 = (nb_40_80 * 100) / total;
        float pourcentage_80_100 = (nb_80_100 * 100) / total;
        float pourcentage_100plus = (nb_100plus * 100) / total;

        // Formater les pourcentages pour les afficher avec une chaîne de caractères
        QString a = QString::number(pourcentage_0_40, 'f', 2);
        QString b = QString::number(pourcentage_40_80, 'f', 2);
        QString c = QString::number(pourcentage_80_100, 'f', 2);
        QString d = QString::number(pourcentage_100plus, 'f', 2);

        a = "0-40 : " + a + "%";
        b = "40-80 : " + b + "%";
        c = "80-100 : " + c + "%";
        d = "100 et plus : " + d + "%";

        // Créer une série de données pour le graphique
        QPieSeries *series = new QPieSeries();
        series->append(a, nb_0_40);
        series->append(b, nb_40_80);
        series->append(c, nb_80_100);
        series->append(d, nb_100plus);

        // Afficher les étiquettes des catégories avec des données non nulles
        if (nb_0_40 != 0)
        {
            QPieSlice *slice = series->slices().at(0);
            slice->setLabelVisible();
            slice->setExploded(true);
        }

        if (nb_40_80 != 0)
        {
            QPieSlice *slice1 = series->slices().at(1);
            slice1->setLabelVisible();
        }

        if (nb_80_100 != 0)
        {
            QPieSlice *slice2 = series->slices().at(2);
            slice2->setLabelVisible();
        }

        if (nb_100plus != 0)
        {
            QPieSlice *slice3 = series->slices().at(3);
            slice3->setLabelVisible();
        }

        // Créer un graphique et ajouter la série de données
        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("Répartition des montants " + QString::number(total));

        // Créer un widget QChartView pour afficher le graphique
        QChartView *chartView = new QChartView(chart);

        chartView->resize(1000, 500);
        chartView->show();
}



void Dialog::on_qr_clicked()
{
    // Get the selected row in the table view
    int row = ui->tableView_facture->currentIndex().row();

    // Check if a valid row is selected
    if (row < 0)
    {
        // Handle the case where no row is selected
        qDebug() << "No row selected.";
        return;
    }

    // Get the code from the "CODE" column in the selected row
    QModelIndex codeIndex = ui->tableView_facture->model()->index(row, 0);

    // Check if the index is valid
    if (!codeIndex.isValid())
    {
        // Handle the case where the index is invalid
        qDebug() << "Invalid index.";
        return;
    }

    // Get the code from the model data
    QString code = ui->tableView_facture->model()->data(codeIndex).toString();

    // Generate the QR code using the Google Charts API
    QString message = " is the code corresponding to this QR code";
    QString url = QString("https://chart.googleapis.com/chart?cht=qr&chs=300x300&chl=%1%2").arg(code).arg(message);

    // Open the URL in the default web browser
    QDesktopServices::openUrl(QUrl(url));
}


//---------------------------------------------------------------------

void Dialog::update_label()
{
    data=A.read_from_arduino();

    if(data=="1")

    ui->label_3->setText("ON"); // si les données reçues de arduino via la liaison série sont égales à 1 // alors afficher ON

    else if (data=="0")

        ui->label_3->setText("OFF");
    // si les données reçues de arduino via la liaison série sont égales à 0
    //alors afficher ON
}



void Dialog::on_pushButton_clicked()
{
    A.write_to_arduino("1");
}

void Dialog::on_pushButton_3_clicked()
{
    A.write_to_arduino("2");
}

void Dialog::on_pushButton_4_clicked()
{
    A.write_to_arduino("3");
}

void Dialog::on_pushButton_21_clicked()
{
    A.write_to_arduino("0");
}
