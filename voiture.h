#ifndef VOITURE_H
#define VOITURE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>
#include <QTableView>

class voiture
{
    QString mat,marque, nom, etat, couleur;
    int nb_p, puiss;
public:
    voiture(){}
    voiture(QString,QString,QString,int,QString,QString,int);

    QString getMarque(){return marque;}
    QString getNom(){return nom;}
    QString getEtat(){return etat;}
    QString getCouleur(){return couleur;}
    QString getMAT(){return mat;}

    int getPorte(){return nb_p;}
    int getPuiss(){return puiss;}

    void setMarque(QString m){marque=m;}
    void setNom(QString n){nom=n;}
    void setEtat(QString e){etat=e;}
    void setCouleur(QString c){couleur=c;}
    void setMAT(QString matt){mat=matt;}
    void setPorte(int nb_p){this->nb_p=nb_p;}
    void setPuiss(int p){this->puiss=p;}

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString);

    QSqlQueryModel *tri();
    void recherche_mat(QTableView *tab_employe , QString);
    void recherche_mar(QTableView *tab_employe , QString);
    void recherche_porte(QTableView *tab_employe , int);
    void recherche_etat(QTableView *tab_employe , QString);
    //QSqlQueryModel* recherche(QTableView , const QString);
};

#endif // VOITURE_H
