#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QSqlQuery>
#include <QSqlQueryModel>
#include "user.h"
#include <QString>
#include <QDate>
#include <QDateTime>
class employe : public user
{
public:
    employe();



    employe(QString username,QString pass , QString email , QString role , QString id_user, 
                QString nom , QString prenom , QString sexe , QString cin ,QString telephone,QDate date_naiss , 
                QDateTime last_login ,QDateTime signup_date ,QString status,QString poste,int salaire , QString id);



//setter
    void set_status(QString);
    void set_poste(QString);
    void set_salaire(int);
    void set_id(QString);
    

//getter
    QString get_status(){return status;}
    QString get_poste(){return poste;}
    int get_salaire(){return salaire;}
    QString get_id(){return id_e;}








bool ajouter_user_emp();

bool ajouter_emp();
QSqlQueryModel* afficher();
bool supprimer(QString);
bool modifier_emp(QString id);

employe getLast_employeValue(QString id);
bool modifier_user_emp(QString id) ;


private:

    QString status,poste,id_e;
    int salaire;

    

    
    
    
    

};

#endif // EMPLOYE_H
