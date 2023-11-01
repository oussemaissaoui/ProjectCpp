#include "employe.h"
#include <QObject>
#include <QDebug>
#include <QSqlError>
//constractor
employe::employe()
{

}

employe::employe(QString usern,QString pass,QString mail,QString role,QDate date,QString nom ,
    QString prenom ,QString cin ,QString status ,QString tel ,int id ):user(usern,pass,mail,role,date)
    {

        this->cin = cin ;
        this->nom = nom ;
        this->prenom = prenom ;
        this->status = status;
        this->telephone =  tel;
        this->id = id ;

    }




//setter 
void employe::set_cin(QString cin)
{
this->cin = cin ;    
}

void employe::set_nom(QString nom)
{
this->nom = nom ;
}

void employe::set_prenom(QString prenom)
{
this->prenom = prenom ;
}

void employe::set_status(QString status)
{
this->status = status ;
}

void employe::set_telephone(QString tel)
{
this->telephone =  tel;
}

void employe::set_id(int id)
{
this->id = id ;
}

bool employe::ajouter()
{
    QSqlQuery query;
      query.prepare("INSERT INTO users (email, password, username) "
                    "VALUES (:email, :password, :username)");
      query.bindValue(":email", get_email());
      query.bindValue(":password", get_password());
      query.bindValue(":username", get_username());
      return query.exec();
}

QSqlQueryModel* employe::afficher()
{

    
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM users");

    if (model->lastError().isValid()) {
        QSqlError lastError = model->lastError();
        qDebug() << "Query execution failed: " << lastError.text();
    }



      return model;


}

