#include "user.h"

user::user()
{

}


user::user(QString usern,QString pass,QString mail,QString role,QDate date)
{

username = usern;    
password = pass;
email    = mail ;
this->role =role;
date_naiss =date;


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

void user::set_last_login(QDateTime date)
{
    this->LastLoginDate=date;
}

void user::set_date_naiss(QDate date)
{
this->date_naiss = date ;
}  

 void user::set_id_user(QString id)
 {
    id_user = id;
 }

bool user::ajouter()
{

      QSqlQuery query;
      query.prepare("INSERT INTO users (email, password, username ,id_user , role) "
                    "VALUES (:email, :password, :username , :id_user , :role)");
      query.bindValue(":email", get_email());
      query.bindValue(":password", get_password());
      query.bindValue(":username", get_username());
      query.bindValue(":id_user", get_id_user().toInt());
      query.bindValue(":role", get_role());
     
      return query.exec();
}

