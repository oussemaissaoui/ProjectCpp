#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Facture.h"
#include "mainwindow.ui"

#include <QMessageBox>
#include <QTextDocument>
#include <QTextCursor>
#include <QSqlQuery>
#include <QTextStream>
#include <QtCore>
#include <QtGui>
#include <QtSql>
#include <QSqlQueryModel>

#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


#include <QObject>
#include <QTimer>
#include <QSqlQuery>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ajout_bout_clicked()
{
    /*int id=ui->lineEdit_id->text().toInt();
    QString type=ui->lineEdit_type->text();
    int montant_total=ui->lineEdit_montant->text().toInt();
    QString datee=ui->lineEdit_date->text();


    Facture f(id, montant_total, type, datee);


    bool test=f.ajouter();
    if (test)
    {
      ui->tab_affich->setModel(f.affiche());
        QMessageBox::information(nullptr, QObject::tr("ok"),
                                 QObject::tr("ajout affectué\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                              QObject::tr("ajout non affectué.\n"
                                          "Click Cancel to exit"), QMessageBox::Cancel);*/

}

void MainWindow::on_affich_bout_clicked()
{
    //ui->tab_affich->setModel(f.affiche());
}

void MainWindow::on_modif_bout_clicked()
{
    /*QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM Facture WHERE id=:ID  ");
    query.bindValue(":id", ui->id_modif->text().toInt());
    query.exec();
    model->setQuery(query);*/

    // Check if the model contains any data before calling delete
    /*if (model->rowCount() > 0) {

        int id=ui->id_modif->text().toInt();
        QString type=ui->type_modif->text();
        int montant_total=ui->montant_modif->text().toInt();
        QString datee=ui->date_modif->text();



    Facture f(id, montant_total, type, datee);



        bool test = f.modifier(id);

        if (test){


        ui->tab_affich->setModel(f.affiche());
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                     QObject::tr("Modification effectué\n"
                                                 "Click Cancel to exit"),QMessageBox::Cancel);




        }
        else{
             ui->tab_affich->setModel(f.affiche());
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
         ui->tab_affich->setModel(f.affiche());
        delete model;
    }*/
}

void MainWindow::on_supp_bout_clicked()
{
    /*QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM Facture WHERE id=:ID");
    query.bindValue(":ID", ui->id_supp->text().toInt());

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'exécution de la requête :" << query.lastError().text();
    }

    model->setQuery(query);

    if (model->rowCount() > 0) {
        int id = ui->id_supp->text().toInt();

        bool test = Stmp.supprimer(id);
        if (test) {
            QMessageBox::information(nullptr, QObject::tr("ok"),
                                     QObject::tr("Suppression effectuée. \n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tab_affich->setModel(f.affiche());
        }
        else {
            QMessageBox::critical(nullptr, QObject::tr("ok"),
                                     QObject::tr("Suppression no effectuée.\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tab_affich->setModel(f.affiche());
        }
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("ok"),
                                 QObject::tr("identifiant non trouvée!!\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_affich->setModel(f.affiche());
    }

    delete model;*/
}

void MainWindow::on_affichier_clicked()
{
    //ui->tab_affich->setModel(f.affiche());
}
