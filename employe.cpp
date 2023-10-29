#include "employe.h"

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


