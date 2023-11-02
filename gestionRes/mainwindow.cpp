#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reservation.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDateEdit>
#include <QTabWidget>
#include <QtDebug>
#include <QVariant>
#include <QDate>
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


void MainWindow::on_ajouter_clicked()
{
int id=ui->numres->text().toInt();
int id2=ui->numero->text().toInt();
int id3=ui->numcl->text().toInt();
int id4=ui->numvoiture->text().toInt();
float montant=ui->montant_2->text().toFloat();
QDate date_d=ui->dateEdit_debut->date();
QDate date_f=ui->dateEdit_2_fin->date();
Reservation R(id,id2,id3,id4,date_d,date_f,montant);
bool test=R.ajouter();
if(test)
{
QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("ajout effectué.\nClick Cancel to exit."),QMessageBox::Cancel);
}
else
    QMessageBox::information(nullptr,QObject::tr("NOT OK"),QObject::tr("Ajout non effectué. \nClick Cancel to exit."),QMessageBox::Cancel);
}



void MainWindow::on_pushButton_clicked()
{
    int id=ui->numRES_s->text().toInt();
    bool test=Etmp.supprimer(id);
    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("supression effectué.\nClick Cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::information(nullptr,QObject::tr("NOT OK"),QObject::tr("supression non effectué.\nClick Cancel to exit."),QMessageBox::Cancel);

}
