#include "crud.h"
#include "ui_crud.h"
#include <QMessageBox>
#include <QObject>
CRUD::CRUD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);

    ui->table_employe->setModel(e.afficher());


}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_ajouter_emp_clicked()
{
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString cin=ui->lineEdit_cin->text();
    QString tel=ui->lineEdit_tel->text();


    QDate date=ui->datenaiss_Edit->date();
    QString username=ui->lineEdit_username->text();
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_pass->text();
    QString role=ui->comboBox_role->currentText();



    employe e(username,password,email,role,date,nom,prenom,cin,"liber","9826",1);

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
            }

}
