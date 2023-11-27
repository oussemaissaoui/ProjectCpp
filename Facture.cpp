#include "Facture.h"
#include <iostream>
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QString>
#include "dialog.h"


Facture::Facture(long id, int montant_total, QString type, QString datee, int duree)
{
    this->id=id;
    this->montant_total=montant_total;
    this->type=type;
    this->datee = datee;
    this->dure = duree;
}

long Facture::getid(){return id;}
QString Facture::gettype(){return  type;}
int Facture::getmontant_total(){return montant_total;}
QString Facture::getdatee(){return datee;}
int Facture::getDuree(){return dure;}

void Facture::setid(long id){this->id=id;}
void Facture::setmontant_total(int montant_total){this->montant_total=montant_total;}
void Facture::settype(QString type){this->type=type;}
void Facture::setdate(QString datee){this->datee=datee;}
void Facture::setDuree(int duree){this->dure=duree;}

bool Facture::ajouter()
{
    QSqlQuery query;
    QString res = QString::number(id);
    QString res1 = QString::number(montant_total);
    QString res2 = QString::number(dure);

    query.prepare("INSERT INTO FACTURE (ID, TYPE , DATEE, MONTANT, DURE) "
                  "VALUES (:ID, :TYPE, :DATEE, :MONTANT, :DURE)");
    query.bindValue(":ID", res);
    query.bindValue(":TYPE", type);
    query.bindValue(":DATEE", datee);
    query.bindValue(":MONTANT", res1);
    query.bindValue(":DURE", res2);

    return query.exec();

}

QSqlQueryModel * Facture::affiche()
{

    QSqlQueryModel* model=new QSqlQueryModel();

              model->setQuery("SELECT* FROM FACTURE");
              model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
              model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
              model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATEE"));
              model->setHeaderData(3, Qt::Horizontal, QObject::tr("MONTANT"));
              model->setHeaderData(4, Qt::Horizontal, QObject::tr("DURE"));


    return model;
}

QSqlQueryModel * Facture::affiche_by_id()
{
    QSqlQueryModel* m_Model=new QSqlQueryModel();

    m_Model->setQuery("SELECT* FROM FACTURE ORDER BY ID DESC");
    m_Model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    m_Model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    m_Model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATEE"));
    m_Model->setHeaderData(3, Qt::Horizontal, QObject::tr("MONTANT"));
    m_Model->setHeaderData(4, Qt::Horizontal, QObject::tr("DURE"));

    return m_Model;
}

bool Facture::modifier(long id)
{

    QSqlQuery query;

    QString res = QString::number(id);
    QString res1 = QString::number(montant_total);
    QString res2 = QString::number(dure);

    query.prepare("UPDATE FACTURE SET ID= :ID, TYPE=:TYPE, DATEE=:DATEE, MONTANT=:MONTANT, DURE=:DURE WHERE ID=:ID");

    query.bindValue(":ID", res);
    query.bindValue(":TYPE", type);
    query.bindValue(":DATEE", datee);
    query.bindValue(":MONTANT", res1);
    query.bindValue(":DURE", res2);
    return query.exec();
}

bool Facture::supprimer(long id)
{
    QSqlQuery query;
    QString res =  QString::number(id);
    query.prepare("Delete from FACTURE where ID=:ID");
    query.bindValue(":ID",res);
    return query.exec();
}

QSqlQueryModel * Facture::recherche(QString a)
{

    QSqlQueryModel* m_Model = new QSqlQueryModel();

    // Définir une requête SQL avec une condition WHERE pour filtrer les résultats
    QString query = "SELECT * FROM FACTURE WHERE DATEE = '" + a + "'";
    m_Model->setQuery(query);

    // Définir les en-têtes de colonne
    m_Model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    m_Model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
    m_Model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATEE"));
    m_Model->setHeaderData(3, Qt::Horizontal, QObject::tr("MONTANT"));
    m_Model->setHeaderData(3, Qt::Horizontal, QObject::tr("DURE"));

    return m_Model;
}

