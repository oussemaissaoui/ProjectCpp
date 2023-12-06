#include "reservation.h"
#include "mainwindow.h"



Reservation::Reservation()
{
nom_c="";
numRES=0;
matricule=0;
date_debut=QDate::fromJulianDay(0);
date_fin=QDate::fromJulianDay(0);
montant_total=0;
}

Reservation::Reservation(QString idc,int num_res,int mat,QDate date_d,QDate date_f,int montant)
{
    nom_c=idc;
    numRES=num_res;
    matricule=mat;
    date_debut=date_d;
    date_fin=date_f;
    montant_total=montant;
}


void Reservation:: setNOM_c(QString NOM_client)
{nom_c=NOM_client;}
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
void Reservation::setMontant(int mont)
{montant_total=mont;}

bool Reservation::ajouter() {

    QSqlQuery query;



    query.prepare("INSERT INTO reservations (nom_client,numres,matricule,montant_total,date_debut,date_fin)"
                       "VALUES (:nom_c,:numres ,:matricule,:montant_total , :date_debut , :date_fin)");
    query.bindValue(":nom_c", getNom_c());
    query.bindValue(":numres", get_numRes());
    query.bindValue(":matricule",getMatricule());
    query.bindValue(":montant_total",getMontant());

    query.bindValue(":date_debut", getDate_debut());
    query.bindValue(":date_fin", getDate_fin());
    return query.exec();


}
bool Reservation:: supprimer(int numRES)
{
    QSqlQuery query;
    QString res=QString::number(numRES);
    query.prepare(" Delete from reservations  where numres = :numRES");
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
    query.prepare("UPDATE reservations SET nom_client = :nom_c  ,matricule =:matricule ,montant_total =:montant_total ,date_debut =:date_debut , date_fin =:date_fin WHERE numres =:numero_res");
    query.bindValue(":numero_res",numero_res);
    query.bindValue(":date_fin",getDate_fin());
    query.bindValue(":nom_c",getNom_c());
    query.bindValue(":matricule",getMatricule());
    query.bindValue(":date_debut",getDate_debut());
    query.bindValue(":montant_total",getMontant());


    return query.exec() ;
}

QSqlQueryModel* Reservation::afficher()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    model->setQuery("SELECT  *FROM reservations");

    return model;
}
QSqlQueryModel * Reservation::rechercher(int NUMR)
{
    QSqlQueryModel *model = new QSqlQueryModel();

        QSqlQuery query;

        query.prepare("SELECT * FROM RESERVATIONS WHERE NUMRES = :numRES");

        query.bindValue(":numRES", NUMR);

        query.exec();

        model->setQuery(query);

        return model;
}
QSqlQueryModel * Reservation::rechercherMAT(int MAT)
{
    QSqlQueryModel *model = new QSqlQueryModel();

        QSqlQuery query;

        query.prepare("SELECT * FROM RESERVATIONS WHERE matricule = :matricule");

        query.bindValue(":matricule", MAT);

        query.exec();

        model->setQuery(query);

        return model;
}

QSqlQueryModel *Reservation::trier()

{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM RESERVATIONS ORDER BY DATE_DEBUT ASC");
    return model;
}
vector<int> Reservation::ReservationsPerWeek()
{
    QDate currentDate = QDate::currentDate();
    QDate startDate = currentDate.addDays(-currentDate.dayOfWeek() + 1);
    QDate endDate = currentDate.addMonths(2);

    vector<int> weeklyCounts(8, 0);

    QSqlQuery query;
    query.prepare("SELECT * FROM RESERVATIONS WHERE date_debut >= :start_date AND date_debut <= :end_date");
    query.bindValue(":start_date", startDate.toString(Qt::ISODate));
    query.bindValue(":end_date", endDate.toString(Qt::ISODate));

    if (query.exec()) {
        while (query.next()) {
            QDate reservationStartDate = query.value("date_debut").toDate();

            // Calculate the week index of the reservation start date
            int weekIndex = reservationStartDate.daysTo(startDate) / 7;

            // Increment the count for the corresponding week
            if (weekIndex >= 0 && weekIndex < 8) {
                weeklyCounts[weekIndex]++;
            }
        }
    } else {
        // Handle the error if the query execution fails
    }

    return weeklyCounts;
}

