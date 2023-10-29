#include "crud.h"
#include "ui_crud.h"
#include <QMessageBox>
#include <QObject>
CRUD::CRUD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);
}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_ajouter_emp_clicked()
{
    /*QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString cin=ui->lineEdit_cin->text();
    QString email=ui->lineEdit_email->text();
    QString tel=ui->lineEdit_tel->text();
    Employe e(nom,prenom,cin,email,tel);

    cout<<"emplye data :  nom  : "<<e.get_nom().toStdString()<<" prenom : "<<e.get_prenom().toStdString() << " cin :" <<e.get_cin().toStdString()<<endl;

    bool test = e.ajouter();

            if (test)
            {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                                         QObject::tr("Ajout effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                       QObject::tr("Ajout non effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
            }*/

}
