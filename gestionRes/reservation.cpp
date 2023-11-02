#include "reservation.h"
#include <QApplication>
#include <QSqlQuery>
#include "connection.h"
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlError>
#include <QMessageBox>
Reservation::Reservation()
{
id_c=0;
id_employe=0;
numRES=0;
matricule="";
date_debut=QDate::fromJulianDay(0);
date_fin=QDate::fromJulianDay(0);
montant_total=0;
}
void Reservation:: setID_c(int id_client)
{id_c=id_client;}
void Reservation::setID_emp(int id_EMPL)
{id_employe=id_EMPL;}
void Reservation::setnumRESRV(int nmRes)
{numRES=nmRes;}
void Reservation::setMatricule(QString mat)
{matricule=mat;}
void Reservation::set_datef(QDate df)
{date_fin=df;}
void Reservation::setdated(QDate dd)
{date_debut=dd;}
void Reservation::setMontant(double mont)
{montant_total=mont;}
bool Reservation::ajouter() {
Connection c;
bool test=false;
//QString id_c=QString::number(ID_CL);

    QSqlQuery query;

    query.prepare("INSERT INTO RESERVATIONS (ID_CL,NUM_RES, ID_EM,MATV, DATE_DEBUT, DATE_FIN,MONTANT_APAYER) VALUES (:ID_CL,:NUM_RES, :ID_EM,:MATV, :DATE_DEBUT, :DATE_FIN,:MONTANT_APAYER);");

    query.bindValue(":ID_CL", id_c);
    query.bindValue(":NUM_RES", numRES);

    query.bindValue(": ID_EM", id_employe);

    query.bindValue(":MATV",matricule);

    query.bindValue(":MONTANT_APAYER",montant_total);

    query.bindValue(":DATE_DEBUT", date_debut);
    query.bindValue(":DATE_FIN", date_fin);

if(query.exec())
{
    test=true;
}else
{
    qDebug()<<"error:"<<query.lastError().text();
}
    return query.exec();
}
