#include "user.h"

user::user()
{

}


user::user(QString username,QString pass , QString email , QString role , QString id_user, 
                QString nom , QString prenom , QString sexe , QString cin ,QString telephone,QDate date_naiss , QDateTime last_login ,QDateTime signup_date )
{
    this->username = username;
    this->password = pass;
    this->email    = email;
    this->role     = role;
    this->id_user  = id_user;
    this->nom      = nom;
    this->prenom   = prenom;
    this->sexe     = sexe;
    this->CIN      = cin;
    this->telephone = telephone;
    this->date_naiss=date_naiss;
    this->LastLoginDate = last_login;
    this->sign_up_date = signup_date;
}                


//setter
void user::set_username(QString usern)
{
    username = usern;

}
void user::set_password(QString pass)
{
    password = pass;

}
void user::set_email(QString mail)
{
    email    = mail ;

}
void user::set_role(QString role)
{
    this->role =role;

}
void user::set_id_user(QString id)
 {
    id_user = id;
 }


void user::set_nom(QString nom)
{
    this->nom = nom;
}
void user::set_prenom(QString prenom)
{
    this->prenom = prenom;
}
void user::set_sexe(QString sexe)
{
    this->sexe = sexe;
}
void user::set_cin(QString cin)
{
    this->CIN = cin;
}
void user::set_date_naiss(QDate date_naiss)
{
    this->date_naiss = date_naiss;
}
void user::set_telephone(QString tel)
{
    this->telephone = tel;
}
void user::set_last_login(QDateTime last_login)
{
    this->LastLoginDate = last_login;
}
void user::set_sign_update(QDateTime singupdate)
{
    this->sign_up_date = singupdate;
}




bool user::ajouter_user()
{

      QSqlQuery query;
      query.prepare("INSERT INTO users (email, password, username ,id_user ,role ,nom,prenom,sexe,cin,date_naissance,last_login,signup_date,telephone) "
                    "VALUES (:email, :password, :username , :id_user , :role,:nom,:prenom,:sexe,:cin,:date_naissance,:last_login,:signup_date,:telephone)");
      query.bindValue(":email", get_email());
      query.bindValue(":password", get_password());
      query.bindValue(":username", get_username());
      query.bindValue(":id_user", get_id_user().toInt());
      query.bindValue(":role", get_role());
      query.bindValue(":nom", get_nom());
      query.bindValue(":prenom", get_prenom());
      query.bindValue(":cin", get_cin());
      query.bindValue(":date_naissance", get_date_naiss());
      query.bindValue(":last_login", get_last_login());
      query.bindValue(":signup_date", get_sign_update());
      query.bindValue(":telephone", get_telephone());
      query.bindValue(":sexe", get_sexe());



     
       bool success =query.exec();

     if(!success){

        if(query.lastError().text().toStdString().find("cannot insert NULL into") != std::string::npos)
                //QMessageBox::critical(nullptr, "Error", "Please Fill all details \n");
                 this->Error_Message+="-Please Fill all details \n";
        else if(query.lastError().text().toStdString().find("unique constraint ") != std::string::npos)
             //QMessageBox::warning(nullptr, "Error", "ID ALREADY Exist  \n");
              this->Error_Message+="-ID ALREADY Exist \n";
        else
             //QMessageBox::warning(nullptr, "Error", "Please verify your sign up details \n");
             this->Error_Message+="-Please verify your sign up details \n";


     }

     return success ;

}

bool user::supprimer_user()
{

      QSqlQuery query;
      query.prepare(" Delete from users where id_user = :cin");

      query.bindValue(":cin" , get_id_user());

      


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

bool user::modifier_user(QString id)
{
      QSqlQuery query;
            query.prepare("UPDATE users SET email = :email, password = :password, username = :username ,"
            " role=:role , nom=:nom , prenom=:prenom , sexe=:sexe , date_naissance=:date_naissance ,"
            " telephone=:telephone WHERE id_user = :id ");

      query.bindValue(":email", get_email());
      query.bindValue(":password", get_password());
      query.bindValue(":username", get_username());
      query.bindValue(":id", id);
      query.bindValue(":role", get_role());
      query.bindValue(":nom", get_nom());
      query.bindValue(":prenom", get_prenom());
      query.bindValue(":cin", get_cin());
      query.bindValue(":date_naissance", get_date_naiss());
      query.bindValue(":last_login", get_last_login());
      query.bindValue(":signup_date", get_sign_update());
      query.bindValue(":telephone", get_telephone());
      query.bindValue(":sexe", get_sexe());


      
      if (query.exec()) {
        int numRowsAffected = query.numRowsAffected();
        bool test= numRowsAffected > 0;
        if(test==false)
        {
            QMessageBox::critical(nullptr, QObject::tr("OK"),
                                         QObject::tr("cin  not exist.\nClick Cancel to exit."), QMessageBox::Cancel);
        }
        else
            cout<<"modifie user mriglaaa !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

        return test;  // Return true if at least one row was affected
    } else {
        // Handle the case where the query execution failed
        qDebug() << "Error: " << query.lastError().text();
    }

    return false;


}
