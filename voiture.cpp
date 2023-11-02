#include "voiture.h"
#include "connection.h"
#include <QDebug>

voiture::voiture(int mat ,QString  marque, QString nom, int nb_p, QString etat, QString couleur, int puiss)
{
    this->mat=mat;
    this->marque=marque;
    this->nom=nom;
    this->nb_p=nb_p;
    this->etat=etat;
    this->couleur=couleur;
    this->puiss=puiss;
}

bool voiture::ajouter()
{
    Connection c;
    QSqlQuery q;
    q.prepare("INSERT INTO VOITURES (MATRICULE, MARQUE, NOM, NB_PORTE, ETAT, COULEUR, PUISSANCE) VALUES (:MAT, :M, :N, :NB_P, :E, :C, :P)");
    q.bindValue(":MAT", QString::number(mat));
    q.bindValue(":M", marque);
    q.bindValue(":N", nom);
    q.bindValue(":NB_P", QString::number(nb_p));
    q.bindValue(":E", etat);
    q.bindValue(":C", couleur);
    q.bindValue(":P", puiss);
    return q.exec();
}

QSqlQueryModel * voiture::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM voitures");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("marque"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nb_porte"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("couleur"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("puissance"));

    /*
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM voitures");

    if (model->lastError().isValid())
    {
        QSqlError lastError = model->lastError();
        qDebug() << "Query execution failed: " << lastError.text();
    }
    */

    return model;
}

int voiture::supprimer(int mat)
{
    QSqlQuery q;
    q.prepare("DELETE FROM voiture WHERE matricule = :MAT");
    q.bindValue(":MAT", mat);

    if(q.exec())
    {
        if(q.numRowsAffected() > 0)
            return 1;
        else
            return 2;
    }
    return 0;
}

bool voiture::modifier(int mat, voiture v)
{
    QSqlQuery q;
    q.prepare("UPDATE voitures SET mat = :MAT, marque = :MARQUE, nom = :NOM, nb_porte = :NB_P, etat = :ETAT, couleur = :COULEUR, puissance = :PUISS;");
    q.bindValue(":MAT",QString::number(v.getMAT()));
    q.bindValue(":MARQUE", v.getMarque());
    q.bindValue(":NOM", v.getNom());
    q.bindValue(":NB_P",QString::number(v.getPorte()));
    q.bindValue(":ETAT", v.getEtat());
    q.bindValue(":COULEUR", v.getCouleur());
    q.bindValue(":PUISS",QString::number(v.getPuiss()));

    return q.exec();
}
