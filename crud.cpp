#include "crud.h"
#include "ui_crud.h"
#include <QMessageBox>
#include <QObject>
CRUD::CRUD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);
    //connect(ui->lineEdit_password, &QLineEdit::textChanged, this, &MainWindow::Show_Button_Login);
    ui->table_employe->setModel(e.afficher());


}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_ajouter_emp_clicked()
{
    //Employe
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString cin=ui->lineEdit_cin->text();
    QString tel=ui->lineEdit_tel->text();
    QString status=ui->comboBox_status->currentText();
    QString sexe=ui->comboBox_sexe->currentText();
    QDate date=ui->datenaiss_Edit->date();

    //user
    
    QString username=ui->lineEdit_username->text();
    QString email=ui->lineEdit_email->text();
    QString password=ui->lineEdit_pass->text();
    QString role=ui->comboBox_role->currentText();
    





    int id_e = cin.toInt();
    employe e(username,password,email,role,date,nom,prenom,cin,status,tel,id_e,sexe);

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

void CRUD::on_pushButton_supp_clicked()
{
    employe e;
    e.set_cin(ui->lineEdit_idsupp->text());

    bool test = e.supprimer(e.get_cin());

            if (test)
            {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                                         QObject::tr("Suprresion effectué.\nClick Cancel to exit."), QMessageBox::Cancel);
            }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                       QObject::tr("Suprresion echoué.\nClick Cancel to exit."), QMessageBox::Cancel);
            }

}


void CRUD::SetLineEdit_value()
{

}



void CRUD::on_pushButton_modifier_clicked()
{
   

    if(!ui->lineEdit_cin_2->text().isEmpty())
    {
        employe e;
        QString nom=ui->lineEdit_nom_2->text();
        QString prenom=ui->lineEdit_prenom_2->text();
        QString cin=ui->lineEdit_cin_2->text();
        QString tel=ui->lineEdit_tel_2->text();
        QString status=ui->comboBox_status_2->currentText();
        QString sexe=ui->comboBox_sexe_2->currentText();
        QDate date=ui->datenaiss_Edit_2->date();



        e.set_cin(cin);
        e.set_nom(nom);
        e.set_prenom(prenom);
        e.set_telephone(tel);
        e.set_status(status);
        e.set_sexe(sexe);
        e.set_date_naiss(date);


        bool test = e.modifier(ui->lineEdit_cin_2->text());

        if (test)
        {
            
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
