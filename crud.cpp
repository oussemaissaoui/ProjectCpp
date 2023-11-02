#include "crud.h"
#include "ui_crud.h"
#include <QMessageBox>
#include <QObject>
CRUD::CRUD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);
    ui->EmployerSide_2->setVisible(false);
    ui->Userside_2->setVisible(false);
    connect(ui->lineEdit_cin_2, &QLineEdit::textChanged, this, &CRUD::SetLineEdit_value);
    ui->table_employe->setModel(e.afficher());


}

CRUD::~CRUD()
{
    delete ui;
}


void CRUD::on_ajouter_emp_clicked()
{
    //Employe
    ui->table_employe->setModel(e.afficher());
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
    ui->table_employe->setModel(e.afficher());
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
    QString id= ui->lineEdit_cin_2->text();
    QSqlQuery query;
       query.prepare("SELECT * FROM employe WHERE cin = :id");
       query.bindValue(":id", id);
    if (query.exec() && query.next()) {
        ui->EmployerSide_2->setVisible(true);

        QString nom = query.value(1).toString();
        QString prenom = query.value(2).toString();
        QString tel = query.value(3).toString();
        QString status = query.value(4).toString();
        QString sexe = query.value(5).toString();
        QDate date = query.value(5).toDate();



        ui->lineEdit_nom_2->setText(nom);
        ui->lineEdit_prenom_2->setText(prenom);
        ui->lineEdit_tel_2->setText(tel);
        ui->comboBox_status_2->setCurrentText(status);
        ui->comboBox_sexe_2->setCurrentText(sexe);
        ui->datenaiss_Edit_2->setDate(date);

    }
    else
    {
        ui->EmployerSide_2->setVisible(false);
    }

    QSqlQuery query2;
       query2.prepare("SELECT * FROM users WHERE id_user = :id");
       query2.bindValue(":id", id);
       if (query2.exec() && query2.next()) {
           ui->Userside_2->setVisible(true);

           QString email = query2.value(0).toString();
           QString password = query2.value(1).toString();
           QString username = query2.value(3).toString();
           QString role = query2.value(4).toString();



           ui->lineEdit_username_2->setText(username);
           ui->lineEdit_email_2->setText(email);
           ui->lineEdit_pass_2->setText(password);
           ui->comboBox_role_2->setCurrentText(role);


       }
       else
       {
           ui->Userside_2->setVisible(false);
       }


}



void CRUD::on_pushButton_modifier_clicked()
{
   

    if(!ui->lineEdit_cin_2->text().isEmpty())
    {
        employe e;
        //partie employe
        ui->table_employe->setModel(e.afficher());
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
        //partie user

        QString username=ui->lineEdit_username_2->text();
        QString email=ui->lineEdit_email_2->text();
        QString password=ui->lineEdit_pass_2->text();
        QString role=ui->comboBox_role_2->currentText();

        e.set_username(username);
        e.set_email(email);
        e.set_password(password);
        e.set_role(role);



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
