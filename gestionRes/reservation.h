#ifndef RESERVATION_H
#define RESERVATION_H

#include <QApplication>
#include<QDate>
#include "ui_mainwindow.h"
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
class Reservation
{
public:
    Reservation();
    Reservation(int numR,int id_cl,int id_e,int ma,QDate date_d,QDate date_f,float montant):id_c(id_cl),numRES(numR),id_employe(id_e),matricule(ma),date_debut(date_d),date_fin(date_f),montant_total(montant)
    {}

    //getters
    int getId_c(){return id_c;}
    int get_numRes(){return numRES;}
    int getId_Emp(){return id_employe;}
    int getMatricule(){return matricule;}
    QDate getDate_fin(){return date_fin;}
    QDate getDate_debut(){return date_debut;}
    double getMontant(){return montant_total;}
    //setters
    void setID_c(int id_client);
    void setID_emp(int id_EMPL);
    void setnumRESRV(int nmRes);
    void setMatricule(int mat);
    void set_datef(QDate df);
    void setdated(QDate dd);
    void setMontant(double mont);
    bool ajouter();
    bool supprimer(int numRES);
    bool modifier(int numero_res);
    QSqlQueryModel* afficher();

private:
    int id_c, numRES,id_employe;
    int matricule;// de la vehicule reservé
    QDate date_debut,date_fin;
    float montant_total;
};

#endif // RESERVATION_H
