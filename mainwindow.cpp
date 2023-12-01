#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservation.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDateEdit>
#include <QTabWidget>
#include <QtDebug>
#include <QVariant>
#include <QDate>
#include <QString>
#include <QDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QRect>
#include <QDir>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPageSize>
#include <QDesktopServices>
#include <QUrl>
#include <QSqlRecord>
#include <QtMath>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

using namespace QtCharts;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    test=A.connect_arduino();
    switch(test){
            case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
                break;
            case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
               break;
            case(-1):qDebug() << "arduino is not available";
            }
    ui->setupUi(this);
    ui->groupBox_4->setVisible(false);
    ui->montant_2->setValidator(new QIntValidator(0,99999,this));
    ui->numvoiture->setValidator(new QIntValidator(0,99999,this));
    //ui->nomcl->setValidator(new QIntValidator());
    ui->numres->setValidator(new QIntValidator(0,99999,this));
    QDate date = QDate::currentDate();
   //date de debut
    ui->dateEdit_2->setDate(date);
    ui->dateEdit_2->setMinimumDate(date);
    //date de fin
    ui->dateEdit_6->setDate(date);
    ui->dateEdit_6->setMinimumDate(date);
    ui->dateEdit_5->setDate(date);
    ui->dateEdit_5->setMinimumDate(date);
    ui->numres_3->setValidator(new QIntValidator(0,99999,this));
    ui->tableView->setModel(Etmp.afficher());
    connect(ui->numres_3,&QLineEdit::textChanged,this,&MainWindow::SetLineEdit_value);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajouter_clicked()
{

QString nom_c = ui->nomcl->text();
int numres = ui->numres->text().toInt();
int matricule = ui->numvoiture->text().toInt();
int montant =ui->montant_2->text().toInt();

QDate date_d = ui->dateEdit_2->date();
QDate date_f = ui->dateEdit_6->date();

Reservation R;
R.setNOM_c(nom_c);
R.setnumRESRV(numres);
R.setMatricule(matricule);
R.setMontant(montant);
R.set_datef(date_d);
R.setdated(date_f);


bool test=R.ajouter();
if(test)
{
    ui->numres->clear();
    ui->nomcl->clear();
    ui->numvoiture->clear();
    ui->montant_2->clear();
    ui->dateEdit_6->clear();
    ui->dateEdit_2->clear();
QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("ajout effectué.\nClick Cancel to exit."),QMessageBox::Cancel);
}
else
    QMessageBox::information(nullptr,QObject::tr("NOT OK"),QObject::tr("Ajout non effectué. \nClick Cancel to exit."),QMessageBox::Cancel);

ui->tableView->resizeColumnsToContents();
ui->tableView->setModel(Etmp.afficher()); //refresh affichage
}



void MainWindow::on_pushButton_clicked()
{
    int id=ui->numres_3->text().toInt();
    bool test=Etmp.supprimer(id);
    if (test)
    {
        ui->numres_3->clear();

        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("supression effectué.\nClick Cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::information(nullptr,QObject::tr("NOT OK"),QObject::tr("supression non effectué.\nClick Cancel to exit."),QMessageBox::Cancel);

    ui->tableView->setModel(Etmp.afficher()); //refresh affichage
}

void MainWindow::on_ajouter_3_clicked()
{
    if(!ui->numres_3->text().isEmpty())
        {

        QString  nom_c = ui->numres_3->text();
        int numres = ui->numres_3->text().toInt();
        int matricule = ui->numres_3->text().toInt();
        int montant =ui->numres_3->text().toInt();
        QDate date_d = ui->dateEdit_8->date();
        QDate date_f = ui->dateEdit_7->date();

        Reservation R;
        R.setNOM_c(nom_c);
        R.setnumRESRV(numres);
        R.setMatricule(matricule);
        R.setMontant(montant);
        R.set_datef(date_f);
        R.setdated(date_d);


            bool test = R.modifier(R.get_numRes());

            if (test)
            {
                 ui->tableView->setModel(Etmp.afficher()); //refresh affichage
                 ui->numres_3->clear();

                QMessageBox::information(nullptr, QObject::tr("OK"),
                                         QObject::tr("Modification effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                       QObject::tr("Modification non effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
            }
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                  QObject::tr("Please don't leave identifier empty.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
}

void MainWindow::SetLineEdit_value()
{
    int  num_reservation= ui->numres_3->text().toInt();
    QSqlQuery query;
       query.prepare("SELECT * FROM reservations  WHERE numres =:numero_res");
       query.bindValue(":numero_res", num_reservation);
    if (query.exec() && query.next()) {
        ui->groupBox_4->setVisible(true);

        QString nom = query.value(0).toString();
        QString matricule = query.value(2).toString();
        QString montant_total = query.value(3).toString();
        QDate date_d = query.value(4).toDate();
        QDate date_f = query.value(5).toDate();
        ui->nomcl_3->setText(nom);
        ui->numvoiture_3->setText(matricule);
        ui->montant_5->setText(montant_total);

        ui->dateEdit_8->setDate(date_d);
        ui->dateEdit_7->setDate(date_f);

    }
    else
    {
        ui->groupBox_4->setVisible(false);
    }



}
void MainWindow::on_recherche_clicked()
{
    QString rechercheTexte = ui->rechercher->text();

    if(rechercheTexte.isEmpty())
    {
        // Si le champ de recherche est vide, afficher la liste complète des employés
        Reservation *r = new Reservation();
        QSqlQueryModel *resultModel = r->afficher(); // Utilisez la fonction afficher() pour récupérer la liste complète
        ui->tableView->setModel(resultModel);
    }
    else
    {
        int valeur = rechercheTexte.toInt();
        Reservation *r = new Reservation();
        QSqlQueryModel *resultModel = r->rechercher(valeur);

        if (resultModel->rowCount() > 0) {
            ui->tableView->setModel(resultModel);
        } else {
            // Gérer le cas où le client n'a pas été trouvé
            QMessageBox msgBox;
            msgBox.setText("Client non trouvé.");
            msgBox.exec();
        }
    }
}



void MainWindow::on_pushButton_3_clicked()
{
    Reservation* r = new Reservation();
    QSqlQueryModel* sortedModel = r->trier();

    ui->tableView->setModel(sortedModel);
}
void MainWindow::on_GENERER_PDF_clicked()
{
    // Retrieve the reservation number from the line edit
    QString reservationNumber = ui->numres_3->text().trimmed(); // Trim any leading or trailing whitespace

    // Create an instance of the Reservation class
    Reservation reservation;

    // Check if the reservation number exists in the data
    QSqlQueryModel *model = reservation.rechercher(reservationNumber.toInt()); // Assuming the reservation number is an integer
    bool reservationExists = (model->rowCount() > 0);

    if (!reservationExists) {
        QMessageBox::critical(this, "Error", "Reservation not found.");
        delete model;
        return;
    }

    int reservationId = model->record(0).value("NUMRES").toInt(); // Assuming the field name is "numRES" in the database
    int vehiculeMatricule = model->record(0).value("MATRICULE").toInt(); // Assuming the field name is "matricule" in the database
    QDate startDate = model->record(0).value("DATE_DEBUT").toDate(); // Assuming the field name is "date_debut" in the database
    QDate endDate = model->record(0).value("DATE_FIN").toDate(); // Assuming the field name is "date_fin" in the database
    int totalAmount = model->record(0).value("MONTANT_TOTAL").toInt(); // Assuming the field name is "montant_total" in the database
    QString clientName = model->record(0).value("NOM_CLIENT").toString(); // Assuming the field name is "nom_c" in the database

    // Create a PDF writer
    QString filePath = QDir::homePath() + "/exported_file.pdf";
    QPdfWriter pdfWriter(filePath);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));

    // Initialize the painter with the PDF writer
    QPainter painter(&pdfWriter);
    painter.begin(&pdfWriter);
    QColor color(58, 170, 53);
    int borderWidth = 10; // Adjust the border width as needed
    QColor borderColor(color); // Adjust the border color as needed

    // Draw the border around the entire page
    QRect pageRect(0, 0, pdfWriter.width(), pdfWriter.height());
    painter.setPen(QPen(borderColor, borderWidth));
    painter.drawRect(pageRect);

    // Set the font and other formatting options if needed
    QFont titleFont("Poppins", 22);
    QFont contentFont("Poppins", 12, QFont::Thin);
    QFont dateFont("Poppins", 12, QFont::Thin);
    QFont signatureFont("Poppins", 12, QFont::Thin);
    painter.setFont(titleFont);

    // Set the parameters for layout
    const int margin = 800;  // Adjust the margin as needed
    const int yOffset = 100; // Adjust the vertical offset as needed

    // Draw the company logo in the top right corner
    QPixmap logo("C:/Users/chebb/OneDrive - ESPRIT/Bureau/Logo_C++.png"); // Replace "path_to_logo.png" with the actual path to your company logo image
    int logoWidth = 800; // Adjust the width of the logo as needed
    int logoHeight = 567; // Adjust the height of the logo as needed
    painter.drawPixmap(margin-400,margin-400, logo.scaled(logoWidth, logoHeight));

    // Draw the title with a green color
    QRect titleRect(margin, margin + yOffset*2, pdfWriter.width() - 2 * margin, 500);
    painter.setPen(color); // Set the pen color for the title text to green
    painter.setFont(titleFont); // Set the font for the title text
    painter.drawText(titleRect, Qt::AlignCenter, "CONFIRMATION DE RESERVATION");

    // Set the font and other formatting options for the content
    painter.setFont(contentFont);
    painter.setPen(Qt::black); // Set the pen color for the content text

    // Draw the content with proper positioning and line breaks
    QString content = QString("Cher/Chère %1\n\n"
                              "Nous sommes heureux de vous confirmer votre réservation avec notre société. Veuillez trouver ci-dessous les détails de votre réservation :\n"
                              "Numéro de réservation :  %2\n"
                              "Nom du client :%3\n"
                              "Matricule de la voiture réservée : %4\n"
                              "Date de début de location : %5 \n"
                              "Date de fin de location : %6\n"
                              "Montant à payer : %7 DTN \n\n"
                              "Règles de location :\n"
                              "1-Durée de la location : Votre réservation est valable pour la période spécifiée. Veuillez vous assurer de restituer le véhicule à la date et à l'heure convenues.\n"
                              "2-Annulation : En cas d'annulation de votre réservation, veuillez nous en informer dans les délais spécifiés. Les frais d'annulation seront appliqués comme suit :\n"
                              "        -Annulation effectuée 3 jours avant la date de début de location : 100 % du montant total de la réservation sera remboursé.\n"
                              "        -Annulation effectuée moins de 1 jours avant la date de début de location : Aucun remboursement ne sera effectué.\n"
                              "Veuillez noter que ces règles de location sont applicables à votre réservation. En confirmant votre réservation, vous acceptez les termes et conditions mentionnés ci-dessus.\n"
                              )
                              .arg(clientName)
                              .arg(reservationId)
                              .arg(clientName)
                              .arg(vehiculeMatricule)
                              .arg(startDate.toString("dd/MM/yyyy"))
                              .arg(endDate.toString("dd/MM/yyyy"))
                              .arg(totalAmount);
    QRect contentRect(margin, titleRect.bottom() + yOffset*16, pdfWriter.width() - 2 * margin, 10000); // Adjust the height and position of the content rectangle as needed
    painter.drawText(contentRect, Qt::AlignTop | Qt::TextWordWrap, content);
    //lieu et date bloc
    QString date=QString("Tunis , Le 16/11/2023\n");
    QRect dateRect(margin*8,titleRect.bottom() + yOffset*10,pdfWriter.width() - 2 * margin, 1000);
    painter.drawText(dateRect, Qt::AlignTop | Qt::TextWordWrap, date);
    //signature
    QString signature=QString("Signature");
    QRect signatureRect(margin*8,titleRect.bottom() + yOffset*105,pdfWriter.width() - 2 * margin, 1000);
    painter.drawText(signatureRect, Qt::AlignTop | Qt::TextWordWrap, signature);
    painter.end();

    delete model;

    // Optional: Open the PDF file after it is generated
    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
}
//calendrier


void MainWindow::on_pushButton_2_clicked()
{
    int num_matricule = ui->lineEditMatricule->text().toInt();
    Reservation r;

    // Réinitialiser le calendrier à sa forme par défaut
    QCalendarWidget* calendarWidget = ui->calendarWidget;
        QTextCharFormat defaultDateFormat;
        defaultDateFormat.setForeground(Qt::black);
        calendarWidget->setDateTextFormat(QDate(), defaultDateFormat);



    // Utiliser la fonction rechercherMAT() pour vérifier si la matricule existe
    QSqlQueryModel* model = r.rechercherMAT(num_matricule);

    if (model->rowCount() > 0)
    {
        ui->calendarWidget->setVisible(true);

        // Récupérer les dates de début et de fin des réservations existantes
        QVector<QDate> reservedDates;
        for (int i = 0; i < model->rowCount(); i++)
        {
            QDate startDate = model->record(i).value("date_debut").toDate();
            QDate endDate = model->record(i).value("date_fin").toDate();

            // Ajouter toutes les dates entre la date de début et la date de fin à la liste
            for (QDate date = startDate; date <= endDate; date = date.addDays(1))
            {
                reservedDates.append(date);
            }
        }

        // Styliser les dates non disponibles en rouge
        QTextCharFormat unavailableDateFormat;
        unavailableDateFormat.setForeground(Qt::red);

        for (const QDate& date : reservedDates)
        {
            calendarWidget->setDateTextFormat(date, unavailableDateFormat);
        }
    }
    else
    {
        ui->calendarWidget->setVisible(false);
    }

    // Libérer la mémoire du modèle
    delete model;
}

void MainWindow::on_pushButton_4_clicked()
{
    Reservation r;
    QSqlQueryModel *model = r.afficher();
    int totalRES = model->rowCount();
    int semaine1 = 0;
    int semaine2 = 0;
    int semaine3 = 0;
    int semaine4 = 0;
    QDate currentDate = QDate::currentDate();

    for (int row = 0; row < totalRES; ++row) {
        QDate date = model->data(model->index(row, 5)).toDate(); // Supposant que l'index de colonne 4 contient la date

        // Comparer la date avec les semaines
        if (date >= currentDate && date <= currentDate.addDays(7)) {
            semaine1++;
        } else if (date > currentDate.addDays(7) && date <= currentDate.addDays(14)) {
            semaine2++;
        } else if (date > currentDate.addDays(14) && date <= currentDate.addDays(21)) {
            semaine3++;
        } else if (date > currentDate.addDays(21) && date <= currentDate.addDays(31)) {
            semaine4++;
        }
    }
    double pourcentageSem1 = (static_cast<double>(semaine1) / totalRES) * 100;
    double pourcentageSem2 = (static_cast<double>(semaine2) / totalRES) * 100;
    double pourcentageSem3 = (static_cast<double>(semaine3) / totalRES) * 100;
    double pourcentageSem4 = (static_cast<double>(semaine4) / totalRES) * 100;

    // Créer un objet QBarSet pour les données des pourcentages
    QBarSet *barSet = new QBarSet("Pourcentages");
    *barSet << pourcentageSem1 << pourcentageSem2 << pourcentageSem3 << pourcentageSem4;

    // Créer un objet QBarSeries pour stocker les données du graphique à barres
    QBarSeries *barSeries = new QBarSeries();
    barSeries->append(barSet);
    QColor greenColor("#2CBB63"); // Vert
    barSet->setColor(greenColor);

    // Créer un objet QChart pour le graphique à barres
    QChart *chart = new QChart();
    chart->addSeries(barSeries);
    chart->setTitle("nombre de reservation par semaine");

    // Créer un axe horizontal pour les semaines
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append("Semaine 1");
    axisX->append("Semaine 2");
    axisX->append("Semaine 3");
    axisX->append("Semaine 4");
    chart->addAxis(axisX, Qt::AlignBottom);
    barSeries->attachAxis(axisX);

    // Créer un axe vertical pour les pourcentages
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Pourcentage");
    chart->addAxis(axisY, Qt::AlignLeft);
    barSeries->attachAxis(axisY);

    // Récupérer le QFrame existant
    QFrame* frame = ui->frame_2; // Remplacez "existingFrame" par le nom réel de votre QFrame

    // Créer un objet QChartView pour afficher le graphique
    QChartView *chartView = new QChartView(chart, frame);
    chartView->setRenderHint(QPainter::Antialiasing);  // Activer l'antialiasing pour des graphiques plus lisses

    // Définir le QChartView comme widget central du QFrame
    QVBoxLayout *frameLayout = new QVBoxLayout(frame);
    frameLayout->addWidget(chartView);
    frame->setLayout(frameLayout);
chartView->setMinimumSize(600,400);
    // Redimensionner le QFrame pour ajuster le graphique
    frame->adjustSize();
}

void MainWindow::on_pushButton_5_clicked()
{
    // Récupérer la date spécifiée par l'utilisateur
       QDate selectedDate = ui->dateEdit_5->date(); // Supposons que vous utilisez un QDateEdit nommé "dateEdit" pour entrer la date

       // Effectuer une requête dans votre base de données pour récupérer les réservations de la date spécifiée
       QSqlQueryModel* reservationsModel = new QSqlQueryModel();
       QSqlQuery query;
       query.prepare("SELECT * FROM reservations WHERE date_debut = :selectedDate");  // Remplacez "reservations" par le nom de votre table de réservations et "date" par le nom de la colonne de date
       query.bindValue(":selectedDate", selectedDate);

       if (query.exec()) {
           // Définir le modèle de requête comme modèle pour le QTableView
           reservationsModel->setQuery(query);

           // Afficher le modèle dans le QTableView
           ui->tableView->setModel(reservationsModel); // Remplacez "tableView" par le nom réel de votre QTableView

           // Facultatif : ajuster automatiquement les colonnes pour adapter le contenu
           ui->tableView->resizeColumnsToContents();
       }
       else {
           // Gérer les erreurs de requête
           QMessageBox::warning(this, "Erreur", "Une erreur s'est produite lors de la récupération des réservations.");
       }
}

void MainWindow::on_GENERER_PDF_2_clicked()
{
    // Retrieve the reservation number from the line edit
    QString reservationNumber = ui->numres_3->text().trimmed(); // Trim any leading or trailing whitespace

    // Create an instance of the Reservation class
    Reservation reservation;

    // Check if the reservation number exists in the data
    QSqlQueryModel *model = reservation.rechercher(reservationNumber.toInt()); // Assuming the reservation number is an integer
    bool reservationExists = (model->rowCount() > 0);

    if (!reservationExists) {
        QMessageBox::critical(this, "Error", "Reservation not found.");
        delete model;
        return;
    }

    int reservationId = model->record(0).value("NUMRES").toInt(); // Assuming the field name is "numRES" in the database
    int vehiculeMatricule = model->record(0).value("MATRICULE").toInt(); // Assuming the field name is "matricule" in the database
    QDate startDate = model->record(0).value("DATE_DEBUT").toDate(); // Assuming the field name is "date_debut" in the database
    QDate endDate = model->record(0).value("DATE_FIN").toDate(); // Assuming the field name is "date_fin" in the database
    int totalAmount = model->record(0).value("MONTANT_TOTAL").toInt(); // Assuming the field name is "montant_total" in the database
    QString clientName = model->record(0).value("NOM_CLIENT").toString(); // Assuming the field name is "nom_c" in the database

    // Create a PDF writer
    QString filePath = QDir::homePath() + "/exported_file.pdf";
    QPdfWriter pdfWriter(filePath);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));

    // Initialize the painter with the PDF writer
    QPainter painter(&pdfWriter);
    painter.begin(&pdfWriter);
    QColor color(58, 170, 53);
    int borderWidth = 10; // Adjust the border width as needed
    QColor borderColor(color); // Adjust the border color as needed

    // Draw the border around the entire page
    QRect pageRect(0, 0, pdfWriter.width(), pdfWriter.height());
    painter.setPen(QPen(borderColor, borderWidth));
    painter.drawRect(pageRect);

    // Set the font and other formatting options if needed
    QFont titleFont("Poppins", 22);
    QFont contentFont("Poppins", 12, QFont::Thin);
    QFont dateFont("Poppins", 12, QFont::Thin);
    QFont signatureFont("Poppins", 12, QFont::Thin);
    painter.setFont(titleFont);

    // Set the parameters for layout
    const int margin = 800;  // Adjust the margin as needed
    const int yOffset = 100; // Adjust the vertical offset as needed

    // Draw the company logo in the top right corner
    QPixmap logo("C:/Users/chebb/OneDrive - ESPRIT/Bureau/Logo_C++.png"); // Replace "path_to_logo.png" with the actual path to your company logo image
    int logoWidth = 800; // Adjust the width of the logo as needed
    int logoHeight = 567; // Adjust the height of the logo as needed
    painter.drawPixmap(margin-400,margin-400, logo.scaled(logoWidth, logoHeight));

    // Draw the title with a green color
    QRect titleRect(margin, margin + yOffset*2, pdfWriter.width() - 2 * margin, 500);
    painter.setPen(color); // Set the pen color for the title text to green
    painter.setFont(titleFont); // Set the font for the title text
    painter.drawText(titleRect, Qt::AlignCenter, "CONFIRMATION DE RESERVATION");

    // Set the font and other formatting options for the content
    painter.setFont(contentFont);
    painter.setPen(Qt::black); // Set the pen color for the content text

    // Draw the content with proper positioning and line breaks
    QString content = QString("Cher/Chère %1\n\n"
                              "Nous sommes heureux de vous confirmer votre réservation avec notre société. Veuillez trouver ci-dessous les détails de votre réservation :\n"
                              "Numéro de réservation :  %2\n"
                              "Nom du client :%3\n"
                              "Matricule de la voiture réservée : %4\n"
                              "Date de début de location : %5 \n"
                              "Date de fin de location : %6\n"
                              "Montant à payer : %7 DTN \n\n"
                              "Règles de location :\n"
                              "1-Durée de la location : Votre réservation est valable pour la période spécifiée. Veuillez vous assurer de restituer le véhicule à la date et à l'heure convenues.\n"
                              "2-Annulation : En cas d'annulation de votre réservation, veuillez nous en informer dans les délais spécifiés. Les frais d'annulation seront appliqués comme suit :\n"
                              "        -Annulation effectuée 3 jours avant la date de début de location : 100 % du montant total de la réservation sera remboursé.\n"
                              "        -Annulation effectuée moins de 1 jours avant la date de début de location : Aucun remboursement ne sera effectué.\n"
                              "Veuillez noter que ces règles de location sont applicables à votre réservation. En confirmant votre réservation, vous acceptez les termes et conditions mentionnés ci-dessus.\n"
                              )
                              .arg(clientName)
                              .arg(reservationId)
                              .arg(clientName)
                              .arg(vehiculeMatricule)
                              .arg(startDate.toString("dd/MM/yyyy"))
                              .arg(endDate.toString("dd/MM/yyyy"))
                              .arg(totalAmount);
    QRect contentRect(margin, titleRect.bottom() + yOffset*16, pdfWriter.width() - 2 * margin, 10000); // Adjust the height and position of the content rectangle as needed
    painter.drawText(contentRect, Qt::AlignTop | Qt::TextWordWrap, content);
    //lieu et date bloc
    QString date=QString("Tunis , Le 16/11/2023\n");
    QRect dateRect(margin*8,titleRect.bottom() + yOffset*10,pdfWriter.width() - 2 * margin, 1000);
    painter.drawText(dateRect, Qt::AlignTop | Qt::TextWordWrap, date);
    //signature
    QString signature=QString("Signature");
    QRect signatureRect(margin*8,titleRect.bottom() + yOffset*105,pdfWriter.width() - 2 * margin, 1000);
    painter.drawText(signatureRect, Qt::AlignTop | Qt::TextWordWrap, signature);
    painter.end();

    delete model;

    // Optional: Open the PDF file after it is generated
    QDesktopServices::openUrl(QUrl::fromLocalFile(filePath));
}

void MainWindow::on_pushButton_check_clicked()
{
    QByteArray data;

   Reservation r;
    A.write_to_arduino("check");
   data= A.read_from_arduino();

   //if r.recher
    QString DataASstring=QString(data);
    cout<<DataASstring.toStdString()<<endl;
    QSqlQuery Query;
    Query.prepare("SELECT NUMRES FROM RESERVATIONS where NUMRES =:date");
    Query.bindValue(":date",DataASstring.toInt());
    qDebug()<<DataASstring.toInt()<<endl;
    if(Query.exec() && Query.next())
    {
        A.write_to_arduino("true");
    }
    else
    {
        A.write_to_arduino("false");
    }
}
