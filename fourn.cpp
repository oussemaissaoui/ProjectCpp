#include "fourn.h"
#include "ui_fourn.h"
#include "fournisseur.h"
#include <QMessageBox>

#include <QFileDialog>
#include<QPdfWriter>
#include<QPainter>
#include <QPrinter>
#include <QDate>
#include "qrcodegen.h"

#include <QPdfWriter>
#include <QPainter>
#include <QSqlQuery>
#include<QtCharts>

#include<QPieSlice >
#include<QPieSeries>
#include<QPrinter>
#include <QFileDialog>
#include<QPrintDialog>
#include "widget.h"
#include "arduino.h"

#include <QRadioButton>

fourn::fourn(QWidget *parent) : QDialog(parent), ui(new Ui::fourn)
{
    ui->setupUi(this);

    btnSexe = new QButtonGroup(this);
    btnSexe->addButton(ui->Homme, 0);
    btnSexe->addButton(ui->Femme, 1);
    sexeMap.insert(0, "homme");
    sexeMap.insert(1, "femme");
    // Fournisseur
    ui->l_CIN->setValidator(new QIntValidator(0, 999999999, this));
    ui->l_tel->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_etud->setModel(f.afficher());
    ui->stackedWidget->setCurrentIndex(1);
    // Connect to Arduino
        int ret = A.connect_arduino("COM11");
        switch (ret) {
        case 0:
            qDebug() << "Arduino is available and connected to: " << A.getarduino_port_name();

            QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(update_label()));
            break;
        case 1:
            qDebug() << "Arduino is available but already connected to: " << A.getarduino_port_name();

            break;
        case -1:
            qDebug() << "Arduino is not available";

            break;
        }

    }


fourn::~fourn()
{
    delete ui;
}

void fourn::on_ajouter_clicked()
{
    fournisseur F;
    ui->tab_etud->setModel(f.afficher());

    if (!ui->l_CIN->text().isEmpty())
    {
        QString nom = ui->l_nom->text();
        QString prenom = ui->l_prenom->text();
        int sexe = btnSexe->checkedId();
        QString sexeString = sexeMap.value(sexe); // Add this line
        int cin = ui->l_CIN->text().toInt();
        int tel = ui->l_tel->text().toInt();
        QString entreprise = ui->l_nomentreprise->currentText();
        QString email = ui->l_email->text();

        F.setCin(cin);
        F.setNom(nom);
        F.setPrenom(prenom);
        F.setSexe(sexeString);
        F.setTel(tel);
        F.setNomEntreprise(entreprise);
        F.setEmail(email);

        bool test = F.ajouter();

        if (test)
        {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Ajout effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                   QObject::tr("Ajout non effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_supprimer_clicked()
{
    if (!ui->l_CIN_2->text().isEmpty())
    {
        int cin = ui->l_CIN_2->text().toInt();
        int test=f.Supprimer(cin);
        //int test = f.supprimer(cin);

        if (test == 1)
        {
            ui->tab_etud->setModel(f.afficher());
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Suppression effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else if (test == 2)
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                  QObject::tr("Cin n'existe pas.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                  QObject::tr("Suppression non effectuée.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_modifier_2_clicked()
{
    if (!ui->l_CIN_3->text().isEmpty())
    {
        fournisseur F;
        F = F.modifier(ui->l_CIN_3->text());
        QString Scin = QString::number(F.getCin());
        QString Stel = QString::number(F.getTel());
  //qInfo()<<"cin: "<<ui->l_CIN_3->text()<<endl;
        ui->l_CIN->setText(Scin);
        ui->l_nom->setText(F.getNom());
        ui->l_prenom->setText(F.getPrenom());

        ui->l_tel->setText(Stel);
        ui->l_nomentreprise->setCurrentText(F.getNomEntreprise());
        ui->l_email->setText(F.getEmail());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_modifier_clicked()
{
    if (!ui->l_CIN_3->text().isEmpty())
    {
        fournisseur F;
        ui->tab_etud->setModel(f.afficher());

        QString nom = ui->l_nom->text();
        QString prenom = ui->l_prenom->text();
        int sexe = btnSexe->checkedId();
        QString sexeString = sexeMap.value(sexe); // Add this line
        int cin = ui->l_CIN->text().toInt();
        int tel = ui->l_tel->text().toInt();
        QString entreprise = ui->l_entreprise->text();
        QString email = ui->l_email->text();

        F.setCin(cin);
        F.setNom(nom);
        F.setPrenom(prenom);
        //F.setSexe(sexe);
        F.setTel(tel);
        F.setNomEntreprise(entreprise);
        F.setEmail(email);

        bool test = F.modifier2(ui->l_CIN_3->text(), F);

        if (test)
        {
            ui->tab_etud->setModel(F.afficher());
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
                              QObject::tr("Please don't leave Cin empty.\nClick Cancel to exit."), QMessageBox::Cancel);
    }
}

void fourn::on_Emp_2_currentChanged(int index)
{
    fournisseur F;
         ui->tab_etud->setModel(F.afficher());
}


void fourn::on_PDF_clicked()
{
         QPdfWriter pdf("liste.pdf");
         QPainter painter(&pdf);
         int i = 4100;

         QColor sosColor(0xFF0000);
         painter.setPen(sosColor);

         painter.setFont(QFont("Montserrat SemiBold", 11));
         QDate cd = QDate::currentDate();
         QDateTime now = QDateTime::currentDateTime();
         painter.drawText(8400, 1000, cd.toString("Tunis"));
         painter.drawText(7700, 1300, now.toString("yyyy-MM-dd HH:mm:ss"));

         QColor titleColor(0x341763);
         painter.setPen(titleColor);
         painter.setFont(QFont("Montserrat SemiBold", 25));

         painter.drawText(3000, 2700, "Liste de Fournisseurs");

         painter.setPen(QPen(Qt::black, 50));
         painter.drawRect(0, 0, pdf.width(), pdf.height());

         painter.setPen(Qt::black);
         painter.setFont(QFont("Time New Roman", 15));
         painter.drawRect(100, 3300, 9400, 500);

         painter.setFont(QFont("Montserrat SemiBold", 10));

         painter.drawText(300, 3600, "ID");
         painter.drawText(1300, 3600, "NOM");
         painter.drawText(2300, 3600, "PRENOM");
         painter.drawText(3300, 3600, "CIN");
         painter.drawText(4300, 3600, "TEL");
         painter.drawText(5300, 3600, "NOM_ENTREPRISE");
         painter.drawText(7000, 3600, "SEXE");
         painter.drawText(8000, 3600, "EMAIL");

         painter.setFont(QFont("Montserrat", 10));

         QSqlQuery query;
         query.prepare("SELECT * FROM FOURNISSEUR");
         query.exec();
         int y = 4300;
         while (query.next()) {
        painter.drawLine(100, y, 9500, y);
        y += 500;
        painter.drawText(300, i, query.value("ID").toString());
        painter.drawText(1300, i, query.value("NOM").toString());
        painter.drawText(2300, i, query.value("PRENOM").toString());
        painter.drawText(3300, i, query.value("CIN").toString());
        painter.drawText(4300, i, query.value("TEL").toString());
        painter.drawText(5300, i, query.value("NOM_ENTREPRISE").toString());
        painter.drawText(7000, i, query.value("SEXE").toString());
        painter.drawText(8000, i, query.value("EMAIL").toString());


        i = i + 500;
         }

         painter.drawLine(100, 3800, 9500, 3800);
         painter.drawLine(100, i, 9500, i);

         QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
                                  QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}



void fourn::on_Emp_2_tabBarClicked(int index)
{
         fournisseur F;
         ui->tab_etud->setModel(F.tritype("ID"));
}


void fourn::on_qr_code_clicked()
{

         QString text ="Articles details :\n ID : "+ ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),0)).toString()
                                 +"\n NOM : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),1)).toString()
                                 +"\n PRENOM : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),2)).toString()
                                 +"\n CIN : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),3)).toString()
                                 +"\n TEL : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),4)).toString()
                                 +"\n NOM_ENTREPRISE : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),5)).toString()
                                 +"\n SEXE : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),6)).toString()
                                 +"\n EMAIL : "+ui->tab_etud->model()->data(ui->tab_etud->model()->index(ui->tab_etud->currentIndex().row(),7)).toString();
                         //text="user data";
                         using namespace qrcodegen;
                           // Create the QR Code object
                           QrCode qr = QrCode::encodeText( text.toUtf8().data(), QrCode::Ecc::MEDIUM );
                           qint32 sz = qr.getSize();
                           QImage im(sz,sz, QImage::Format_RGB32);
                             QRgb black = qRgb(  0,  0,  0);
                             QRgb white = qRgb(255,255,255);
                           for (int y = 0; y < sz; y++)
                             for (int x = 0; x < sz; x++)
                               im.setPixel(x,y,qr.getModule(x, y) ? black : white );
                           ui->codeQr->setPixmap( QPixmap::fromImage(im.scaled(256,256,Qt::KeepAspectRatio,Qt::FastTransformation),Qt::MonoOnly) );

}


void fourn::on_TRI_clicked()
{
   fournisseur f;
   ui->tab_etud->setModel(f.tritype("NOM"));
}


void fourn::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
           QString password = ui->lineEdit__password->text();

           if ((username == "admin" && password == "admin")||(username == "ayoub" && password == "mariem")) {
               QMessageBox::information(this, "Login", "Username and password are correct");
            ui->stackedWidget->setCurrentIndex(1);

           }
           else {
               QMessageBox::warning(this, "Login", "Username and password are not correct");
           }
           ui->lineEdit_username->clear();
           ui->lineEdit__password->clear();
}

void fourn::on_pushButto_stat_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
                       model->setQuery("select * from fournisseur where NOM_ENTREPRISE='Tesla' ");
                       float entreprise1=model->rowCount();
                       model->setQuery("select * from fournisseur where NOM_ENTREPRISE='Hyundai' ");
                       float entreprise2=model->rowCount();
                       model->setQuery("select * from fournisseur where NOM_ENTREPRISE='Kalkhoff' ");
                       float entreprise3=model->rowCount();
                       model->setQuery("select * from fournisseur where NOM_ENTREPRISE='Mazda' ");
                       float entreprise4=model->rowCount();
                       model->setQuery("select * from fournisseur where NOM_ENTREPRISE='Beaufort' ");
                       float entreprise5=model->rowCount();
                       model->setQuery("select * from fournisseur where NOM_ENTREPRISE='Trek' ");
                       float entreprise6=model->rowCount();
                       float total=entreprise1+entreprise2+entreprise3+entreprise4+entreprise5+entreprise6;
                       QString a=QString("Tesla "+QString::number((entreprise1*100)/total,'f',2)+"%" );
                       QString b=QString("Hyundai "+QString::number((entreprise2*100)/total,'f',2)+"%" );
                       QString c=QString("Kalkhoff"+QString::number((entreprise3*100)/total,'f',2)+"%" );
                       QString d=QString("Mazda "+QString::number((entreprise4*100)/total,'f',2)+"%" );
                       QString e=QString("Beaufort"+QString::number((entreprise5*100)/total,'f',2)+"%" );
                       QString f=QString("Trek"+QString::number((entreprise6*100)/total,'f',2)+"%" );
                       QPieSeries *series = new QPieSeries();
                       series->append(a,entreprise1);
                       series->append(b,entreprise2);
                       series->append(c,entreprise3);
                       series->append(d,entreprise4);
                       series->append(e,entreprise5);
                       series->append(d,entreprise4);
               if (entreprise1!=0)
               {QPieSlice *slice = series->slices().at(0);
                slice->setLabelVisible();
                slice->setPen(QPen());}
               if ( entreprise2!=0)
               {
                        // Add label, explode and define brush for 2nd slice
                        QPieSlice *slice1 = series->slices().at(1);
                        //slice1->setExploded();
                        slice1->setLabelVisible();
               }
               if(entreprise3!=0)
               {
                        // Add labels to rest of slices
                        QPieSlice *slice2 = series->slices().at(2);
                        //slice1->setExploded();
                        slice2->setLabelVisible();
               }
               if (entreprise4!=0)
               {QPieSlice *slice3 = series->slices().at(3);
                slice3->setLabelVisible();
                slice3->setPen(QPen());}
               if ( entreprise5!=0)
               {
                        // Add label, explode and define brush for 2nd slice
                        QPieSlice *slice4 = series->slices().at(4);
                        //slice1->setExploded();
                        slice4->setLabelVisible();
               }
               if(entreprise6!=0)
               {
                        // Add labels to rest of slices
                        QPieSlice *slice5 = series->slices().at(5);
                        //slice1->setExploded();
                        slice5->setLabelVisible();
               }
                       // Create the chart widget
                       QChart *chart = new QChart();
                       // Add data to chart with title and hide legend
                       chart->addSeries(series);
                       chart->setTitle("Pourcentage Par Nom d'Entreprise :Nombre Des Fournisseurs "+ QString::number(total));
                       chart->legend()->hide();
                       // Used to display the chart
                       QChartView *chartView = new QChartView(chart);
                       chartView->setRenderHint(QPainter::Antialiasing);
                       chartView->resize(1000,500);
                       chartView->show();


}

void fourn::on_comboBox_activated(const QString &arg1)
{
    if(ui->comboBox->currentText()=="Tri par Id")
    {
        ui->tab_etud->setModel(f.trierFournisseurparId());

    }else if(ui->comboBox->currentText()=="Tri par Nom")
    {
        ui->tab_etud->setModel(f.trierFournisseurparNom());

    }else if(ui->comboBox->currentText()=="Tri par NomEntreprise")
    {
        ui->tab_etud->setModel(f.trierFournisseuparNomEntreprise());
    }
}

void fourn::on_lineEdit_textChanged(const QString &arg1)
{

    QString rech=ui->lineEdit->text();
    ui->tab_etud->setModel(f.RechercheFournisseur(rech));
}

void fourn::on_pushButto_afficher_clicked()
{

    ui->tab_etud->setModel(f.afficher());
}

void fourn::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{

}
    


void fourn::on_camera_clicked()
{
    Widget w ;
    w.setModal(true);
    w.exec();
}

int rechercherIdDansLaBaseDeDonnees(const QString &nom) {
    QSqlQuery query;
    query.prepare("SELECT ID FROM Fournisseur WHERE NOM = :nom");
    query.bindValue(":nom", nom);

    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {

        qDebug() << "Erreur: Nom non trouvé dans la base de données";
        return -1;
    }
}
void fourn::on_pushButton_clicked()
{          QString nom = ui->lineEdit->text();

        if (A.connect_arduino("COM11") == 0) {
            qDebug() << "Connected to Arduino";


            int id = rechercherIdDansLaBaseDeDonnees(nom);

            if (id != -1) {

                                   QByteArray data;
                                   data.append(QString::number(id) + "\n");

                                   A.write_to_arduino(data);

                                   qDebug() << "ID sent to Arduino: " << data;
            } else {
                                   qDebug() << "ID not found in the database for the entered name: " << nom;
                                   QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                                         QObject::tr("ID not found in the database for the entered name."),
                                                         QMessageBox::Cancel);
            }

            // Close the Arduino connection
            A.close_arduino();
            qDebug() << "Arduino connection closed";
        } else {
            qDebug() << "Failed to connect to Arduino";
            QMessageBox::critical(nullptr, QObject::tr("Erreur de connexion"),
                                  QObject::tr("Impossible de se connecter à Arduino.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
        }
    }

