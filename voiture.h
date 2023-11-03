#ifndef VOITURE_H
#define VOITURE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>

class voiture
{
    QString marque, nom, etat, couleur;
    int mat, nb_p, puiss;
public:
    voiture(){}
    voiture(int,QString,QString,int,QString,QString,int);

    QString getMarque(){return marque;}
    QString getNom(){return nom;}
    QString getEtat(){return etat;}
    QString getCouleur(){return couleur;}

    int getMAT(){return mat;}
    int getPorte(){return nb_p;}
    int getPuiss(){return puiss;}

    void setMarque(QString m){marque=m;}
    void setNom(QString n){nom=n;}
    void setEtat(QString e){etat=e;}
    void setCouleur(QString c){couleur=c;}
    void setMAT(int mat){this->mat=mat;}
    void setPorte(int nb_p){this->nb_p=nb_p;}
    void setPuiss(int p){this->puiss=p;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int);
};

#endif // VOITURE_H
