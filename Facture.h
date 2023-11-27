#ifndef FACTURE_H
#define FACTURE_H
#include<QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>

using namespace std;


class Facture
{


    public:
    Facture(){}
        Facture(long, int, QString, QString, int );

        long getid();
        QString gettype();
        int getmontant_total();
        QString getdatee();
        int getDuree();

        void setid(long);
        void setmontant_total(int);
        void settype(QString);
        void setdate(QString);
        void setDuree(int);

    bool ajouter();
    bool supprimer (long);
    bool modifier(long);
    QSqlQueryModel * recherche(QString );
    QSqlQueryModel * affiche ();
    QSqlQueryModel * affiche_by_id();

private:
    QString type;
    long id;
    int montant_total,dure;
    QString datee;


};

#endif // FACTURE_H
