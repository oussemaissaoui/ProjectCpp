#include "employe.h"
#include <string>
#include <QObject>
#include <qDebug>
#include <QSqlError>
#include <QDialog>
#include <QMessageBox>

//constractor
employe::employe()
{

}
employe::employe(QString username,QString pass , QString email , QString role , QString id_user, 
                QString nom , QString prenom , QString sexe , QString cin ,QString telephone,QDate date_naiss , 
                QDateTime last_login ,QDateTime signup_date ,QString status,QString poste,int salaire , QString id):user(username,pass,email,role,id_user,nom,prenom,sexe,cin,telephone,date_naiss,last_login,signup_date)
{

    this->status = status;
    this->poste = poste;
    this->salaire = salaire;
    this->id_e =id;

}



//setter 

void employe::set_status(QString status)
{
    this->status = status;
}
void employe::set_poste(QString poste)
{
    this->poste = poste;
}
void employe::set_salaire(int salaire)
{
    this->salaire = salaire;
}

void employe::set_id(QString id)
{
    this->id_e = id;
}



bool employe::ajouter_emp()
{
        QSqlQuery query2;
        query2.prepare("INSERT INTO employe (status,poste,id_e,salaire) "
                      "VALUES (:status, :poste , :id_e,:salaire)");

        query2.bindValue(":status", get_status());
        query2.bindValue(":poste", get_poste());
        query2.bindValue(":id_e", get_id());
        query2.bindValue(":salaire", get_salaire());

        bool success =(query2.exec());

        if (!success )
        {
            
            if(query2.lastError().text().toStdString().find("cannot insert NULL into") != std::string::npos)
                //QMessageBox::critical(nullptr, "Error", "Please Fill all details \n");
                this->Error_Message+="-Please Fill all details \n";
            else if(query2.lastError().text().toStdString().find("unique constraint ") != std::string::npos)
                //QMessageBox::warning(nullptr, "Error", "ID ALREADY Exist  \n");
                this->Error_Message+="-ID ALREADY Exist \n";
            else
            {
                //QMessageBox::warning(nullptr, "Error", "Please verify your sign up details \n");
                this->Error_Message+="-Please verify your sign up details \n";
            }   
            
        }
    return success;
}


bool employe::ajouter_user_emp()
{
    this->Error_Message="";
    bool ajouter_user_success = this->ajouter_user();

    if(ajouter_user_success)
    {
        bool ajout_emp_succes = this->ajouter_emp();

        if(ajout_emp_succes)
        {
            QMessageBox::information(nullptr, "Success", "User and employee data added successfully");
            return true;
        }
        else
        {
            this->supprimer_user();
            QMessageBox::warning(nullptr, "Error", this->Error_Message+"\nFailed to add employee data");
            return false;
        }



    }
    return false;




}

QSqlQueryModel* employe::afficher()
{

    
     QSqlQueryModel *model = new QSqlQueryModel;
      //model->setQuery("SELECT * FROM users");
      model->setQuery("SELECT EMAIL,PASSWORD,TO_CHAR(id_user, '99999999') AS id_user,USERNAME,ROLE,NOM,PRENOM,SEXE,CIN,DATE_NAISSANCE,LAST_LOGIN,SIGNUP_DATE,TELEPHONE FROM users");
      if (model->lastError().isValid()) {
        qDebug() << "Error in SQL query: " << model->lastError().text();
    }

      


      return model;


}




bool employe::supprimer(QString id)
{

      QSqlQuery query;
      query.prepare(" Delete from employe where id_e = :cin");

      query.bindValue(":cin" , id);

      


      if (query.exec()) {
        int numRowsAffected = query.numRowsAffected();
        bool test=numRowsAffected > 0 ;
        if(test==false)
        {
            QMessageBox::critical(nullptr, QObject::tr("OK"),
                                         QObject::tr("cin does not exist.\nClick Cancel to exit."), QMessageBox::Cancel);
        }

        return test;  // Return true if at least one row was affected
    } else {
        // Handle the case where the query execution failed
        qDebug() << "Error: " << query.lastError().text();
    }

    return false;
        
      

}


bool employe::modifier_emp(QString id) {

    QSqlQuery query2;
      query2.prepare("UPDATE employe SET status = :status, poste = :poste, salaire = :salaire WHERE id_e = :id ");

      query2.bindValue(":status", get_status());
      query2.bindValue(":poste", get_poste());
      query2.bindValue(":id", id);
      query2.bindValue(":salaire", get_salaire());


    
      if (query2.exec()) {
        int numRowsAffected2 = query2.numRowsAffected();
        bool test= numRowsAffected2 > 0;
        if(test==false)
        {
            QMessageBox::critical(nullptr, QObject::tr("OK"),
                                         QObject::tr("cin does not exist.\nClick Cancel to exit."), QMessageBox::Cancel);
        }

        return test;  // Return true if at least one row was affected
    } else {
        // Handle the case where the query execution failed
        qDebug() << "Error: " << query2.lastError().text();
    }

    return false;

}

employe employe::getLast_employeValue(QString id)
{

    QString status_tmp; 
    QString poste_tmp;
    int salaire_tmp=0;
    QString email_tmp; 
    QString password_tmp; 
    QString id_tmp; 
    QString username_tmp; 
    QString role_tmp; 
    QString nom_tmp; 
    QString prenom_tmp; 

    QString sexe_tmp; 
    QString cin_tmp; 
           

    QDate date_tmp; 

    QDateTime last_login_tmp; 
    QDateTime signup_date_tmp; 
    QString tel_tmp;


  
    QSqlQuery query;
       query.prepare("SELECT * FROM employe WHERE id_e =:id");
       query.bindValue(":id",id);
    if (query.exec() && query.next()) {
        

     status_tmp = query.value(0).toString();
     poste_tmp = query.value(2).toString();
     salaire_tmp = query.value(3).toInt();
        
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                   QObject::tr("Error Reading from database\nClick Cancel to exit."), QMessageBox::Cancel);
    }

    QSqlQuery query2;
    query2.prepare("SELECT * FROM users where id_user =:id");
    query2.bindValue(":id",14521693);
    if (query2.exec() && query2.next())
    {
           
         email_tmp = query2.value(0).toString();
         password_tmp = query2.value(1).toString();

         username_tmp = query2.value(3).toString();
         role_tmp = query2.value(4).toString();
         nom_tmp = query2.value(5).toString();
         prenom_tmp = query2.value(6).toString();

        sexe_tmp = query2.value(7).toString();
        cin_tmp =  query2.value(8).toString();
           
        date_tmp = query2.value(9).toDate();

        last_login_tmp = query2.value(10).toDateTime();
        signup_date_tmp = query2.value(11).toDateTime();
        tel_tmp = query2.value(12).toString();
    
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                                   QObject::tr("Error reading from database\nClick Cancel to exit."), QMessageBox::Cancel);
    }

    employe emp_tmp(username_tmp,password_tmp,email_tmp,role_tmp,id_tmp,nom_tmp,prenom_tmp,sexe_tmp,cin_tmp,tel_tmp,date_tmp,last_login_tmp,signup_date_tmp,status_tmp,poste_tmp,salaire_tmp,cin_tmp);

    return emp_tmp;


}

bool employe::modifier_user_emp(QString id) {

    employe emptmp=this->getLast_employeValue(id);
    
    bool modifier_user_success = this->modifier_user(id);

    if(modifier_user_success==true)
    {
       bool modifier_emp_success=this->modifier_emp(id);
        if(modifier_emp_success)
        {
            QMessageBox::information(nullptr, "Success", "User and employee data modified successfully");
            return true;
        }
        else
        {
            emptmp.modifier_user(id);
            QMessageBox::warning(nullptr, "Error", this->Error_Message+"\nVerify employe data");
            return false;
        }


        
    }
    return false;

}
