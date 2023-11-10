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
    /*model->setHeaderData(0, Qt::Horizontal, QObject::tr("matricule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("marque"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nb_porte"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("etat"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("couleur"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("puissance"));*/

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

bool voiture::supprimer(int mat)
{
    QSqlQuery q;
    q.prepare("DELETE FROM VOITURES WHERE MATRICULE = :MAT");
    q.bindValue(":MAT", mat);

    return (q.exec());
}

    bool voiture::modifier(int mat)
    {
        QSqlQuery q;
        q.prepare("UPDATE voitures SET marque = :MARQUE, nom = :NOM, nb_porte = :NB_P, etat = :ETAT, couleur = :COULEUR, puissance = :PUISS WHERE MATRICULE = :MAT");
        q.bindValue(":MAT",mat);
        q.bindValue(":MARQUE", getMarque());
        q.bindValue(":NOM", getNom());
        q.bindValue(":NB_P",QString::number(getPorte()));
        q.bindValue(":ETAT", getEtat());
        q.bindValue(":COULEUR", getCouleur());
        q.bindValue(":PUISS",QString::number(getPuiss()));

        if (q.exec()) {
                int numRowsAffected = q.numRowsAffected();
                return numRowsAffected > 0; // Return true if at least one row was updated.
            }
        else return false;
    }
