#ifndef RESERVATION_H
#define RESERVATION_H

#include <QApplication>
#include  <QDate>
#include <QApplication>
#include <QSqlQuery>
#include "connection.h"
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QtDebug>
#include <QSqlError>
#include <QMessageBox>
#include <QDate>
#include <QVariant>
#include <vector>
using namespace std;

class Reservation
{
public:
    Reservation();
    Reservation(QString,int,int,QDate,QDate,int);

    //getters
    QString getNom_c(){return nom_c;}
    int get_numRes(){return numRES;}
    int getId_Emp(){return id_employe;}
    int getMatricule(){return matricule;}
    QDate getDate_fin(){return date_fin;}
    QDate getDate_debut(){return date_debut;}
    int getMontant(){return montant_total;}
    //setters
    void setNOM_c(QString id_client);
    void setID_emp(int id_EMPL);
    void setnumRESRV(int nmRes);
    void setMatricule(int mat);
    void set_datef(QDate df);
    void setdated(QDate dd);
    void setMontant(int mont);
    //CRUD
    bool ajouter();
    bool supprimer(int numRES);
    bool modifier(int numero_res);
    QSqlQueryModel* afficher();
    QSqlQueryModel * rechercher(int  NUMR);
    QSqlQueryModel * trier();
    QSqlQueryModel * rechercherMAT(int MAT);
    vector<int> ReservationsPerWeek();
private:
    int  numRES,id_employe;
    int matricule;// de la vehicule reservé
    QDate date_debut,date_fin;
    int montant_total;
    QString nom_c;
};

#endif // RESERVATION_H
