#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QSqlQuery>
#include <QSqlQueryModel>
#include "user.h"
#include <QString>
#include <QDate>

class employe : public user
{
public:
    employe();
    employe(QString usern,QString pass,QString mail,QString role,QDate date,QString nom,
    QString prenom ,QString cin ,QString status ,QString tel ,int id ,QString sexe);

//getter
QString get_cin(){return cin;}
QString get_nom(){return nom;}
QString get_prenom(){return prenom;}
QString get_status(){return status;}
QString get_telephone(){return telephone;}
int get_id(){return id;}
QString get_sexe(){return sexe;}
bool ajouter();
QSqlQueryModel* afficher();
bool supprimer(QString);
bool modifier(QString );



//setter
void set_cin(QString);
void set_nom(QString);
void set_prenom(QString);
void set_status(QString);
void set_telephone(QString);
void set_id(int);
void set_sexe(QString);


private:
    QString cin,nom,prenom,status,telephone,sexe;
    int id;
    

};

#endif // EMPLOYE_H
