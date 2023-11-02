#ifndef RESERVATION_H
#define RESERVATION_H

#include <QApplication>
#include<QDate>

class Reservation
{
public:
    Reservation();
    Reservation(int numR,int id_cl,int id_e,QString ma,QDate date_d,QDate date_f,double montant):id_c(id_cl),numRES(numR),id_employe(id_e),matricule(ma),date_debut(date_d),date_fin(date_f),montant_total(montant)
    {}

    //getters
    int getId_c(){return id_c;}
    int get_numRes(){return numRES;}
    int getId_Emp(){return id_employe;}
    QString getMatricule(){return matricule;}
    QDate getDate_fin(){return date_fin;}
    QDate getDate_debut(){return date_debut;}
    double getMontant(){return montant_total;}
    //setters
    void setID_c(int id_client);
    void setID_emp(int id_EMPL);
    void setnumRESRV(int nmRes);
    void setMatricule(QString mat);
    void set_datef(QDate df);
    void setdated(QDate dd);
    void setMontant(double mont);
    bool ajouter();

private:
    int id_c, numRES,id_employe;
    QString matricule;// de la vehicule reservé
    QDate date_debut,date_fin;
    double montant_total;
};

#endif // RESERVATION_H
