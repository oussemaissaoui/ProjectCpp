#ifndef EMPLOYE_H
#define EMPLOYE_H

#include "user.h"
#include <QString>
#include <QDate>

class employe : public user
{
public:
    employe();
    employe(QString usern,QString pass,QString mail,QString role,QDate date,QString nom ,
        QString prenom ,QString cin ,QString sta ,QString tel ,int id  );

//getter
QString get_cin(){return cin;}
QString get_nom(){return nom;}
QString get_prenom(){return prenom;}
QString get_status(){return status;}
QString get_telephone(){return telephone;}
int get_id(){return id;}



//setter
void set_cin(QString);
void set_nom(QString);
void set_prenom(QString);
void set_status(QString);
void set_telephone(QString);
void set_id(int);


private:
    QString cin,nom,prenom,status,telephone;
    int id;
    

};

#endif // EMPLOYE_H
