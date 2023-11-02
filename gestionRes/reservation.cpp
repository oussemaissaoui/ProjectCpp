#include "reservation.h"


Reservation::Reservation()
{
id_c=0;
id_employe=0;
numRES=0;
matricule=0;
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
void Reservation::setMatricule(int mat)
{matricule=mat;}
void Reservation::set_datef(QDate df)
{date_fin=df;}
void Reservation::setdated(QDate dd)
{date_debut=dd;}
void Reservation::setMontant(double mont)
{montant_total=mont;}

bool Reservation::ajouter() {
Connection c;

    QSqlQuery query;
    QString ID=QString::number(numRES);
    query.prepare("INSERT INTO RESERVATIONS (id_c,numRES, id_employe,matricule,date_debut,date_fin,montant_total) VALUES (:id_c,:numRES,:id_employe,:matricule,:date_debut,:date_fin,:montant_total);");

    query.bindValue(":id_c", id_c);
    query.bindValue(":numRES", ID);
    query.bindValue(":id_employe", id_employe);
    query.bindValue(":matricule",matricule);
    query.bindValue(":montant_total",montant_total);
    query.bindValue(":date_debut", date_debut);
    query.bindValue(":date_fin",date_fin);
    return query.exec();
}
bool Reservation:: supprimer(int numRES)
{
    QSqlQuery query;
    QString res=QString::number(numRES);
    query.prepare("delete from reservation where NUM_RES=:numRES");
    query.bindValue(":numRES",res);
    if(query.exec())
    {
            return true;
    }
    else return false;
}
bool Reservation::modifier(int numero_res)
{
    QSqlQuery query;
    query.prepare("UPDATE reservation SET ID_CL= :id_c,NUM_RES=:numRES, ID_EM=:id_employe,MATV=:matricule, DATE_DEBUT=:date_debut, DATE_FIN=:date_fin,MONTANT_APAYER=:montant_total");
    query.bindValue(":NUM_RES",numero_res);
    query.bindValue(":ID_CL",getId_c());
    query.bindValue(":ID_EM",getId_Emp());
    query.bindValue(":MATV",getMatricule());
    query.bindValue(":DATE_DEBUT",getDate_debut());
    query.bindValue(":DATE_FIN",getDate_fin());
    query.bindValue(":MONTANT_APAYER",getMontant());
    return query.exec();
}
QSqlQueryModel* Reservation::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    model->setQuery("SELECT *FROM reservations");
    return model;
}
