#include "voiture.h"
#include "connection.h"
#include "gest_vehi.h"
#include <QDebug>

voiture::voiture(QString mat ,QString  marque, QString nom, int nb_p, QString etat, QString couleur, int puiss)
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
    q.bindValue(":MAT", QString(mat));
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

bool voiture::supprimer(QString mat)
{
    QSqlQuery q;
    q.prepare("DELETE FROM VOITURES WHERE MATRICULE = :MAT");
    q.bindValue(":MAT", mat);

    return (q.exec());
}

bool voiture::modifier(QString mat)
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
        return numRowsAffected > 0;
    }
    else return false;
}

QSqlQueryModel *voiture::tri()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from VOITURES ORDER BY MATRICULE ASC");

    model->setHeaderData(0,Qt::Horizontal,QObject::tr("MATRICULE"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("MARQUE"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("NOM"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("NB_PORTE"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("ETAT"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("COULEUR"));
    model->setHeaderData(6,Qt::Horizontal,QObject::tr("PUISSANCE"));

    return model;
}

void voiture::recherche_mat(QTableView *tab_voiture, QString x)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QString val = QString(x);
    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT * FROM VOITURES WHERE MATRICULE LIKE '%" + val + "%';");
    query->exec();
    model->setQuery(*query);

    tab_voiture->setModel(model);
    tab_voiture->show();
}

void voiture::recherche_mar(QTableView *tab_voiture, QString ch)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QString val = QString(ch);
    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT * FROM VOITURES WHERE MARQUE LIKE '%" + val + "%';");
    query->exec();
    model->setQuery(*query);

    tab_voiture->setModel(model);
    tab_voiture->show();
}

void voiture::recherche_porte(QTableView *tab_voiture, int x)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QString val = QString::number(x);
    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT * FROM VOITURES WHERE NB_PORTE LIKE '%" + val + "%';");
    query->exec();
    model->setQuery(*query);

    tab_voiture->setModel(model);
    tab_voiture->show();
}

void voiture::recherche_etat(QTableView *tab_voiture, QString ch)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    QString val = QString(ch);
    QSqlQuery *query = new QSqlQuery;
    query->prepare("SELECT * FROM VOITURES WHERE ETAT LIKE '%" + val + "%';");
    query->exec();
    model->setQuery(*query);

    tab_voiture->setModel(model);
    tab_voiture->show();
}
