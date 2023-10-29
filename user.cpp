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
