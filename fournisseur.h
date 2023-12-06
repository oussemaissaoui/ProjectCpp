#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtDebug>

class fournisseur {
    QString id,sexe, nom, prenom, nom_entreprise, email;
    int cin;
    qint64 tel;

public:
    fournisseur();
    fournisseur(QString, QString, QString, int, qint64, QString, QString, QString);

    // Getters
    QString getId() { return id; }
    QString getNom() { return nom; }
    QString getPrenom() { return prenom; }
    QString getSexe() { return sexe; }
    QString getNomEntreprise() { return nom_entreprise; }
    QString getEmail() { return email; }
    int getCin() { return cin; }
    qint64 getTel() { return tel; }

    // Setters
    void setId(QString n) { id = n; }
    void setNom(QString n) { nom = n; }
    void setPrenom(QString n) { prenom = n; }
    void setSexe(QString n) { sexe = n; }
    void setNomEntreprise(QString n) { nom_entreprise = n; }
    void setEmail(QString n) { email = n; }
    void setCin(int n) { cin = n; }
    void setTel(qint64 n) { tel = n; }

    bool ajouter();
    QSqlQueryModel* afficher();
    QSqlQueryModel* tritype(const QString &aux);
    int Supprimer(int);
    fournisseur modifier(QString);
    bool modifier2(QString, fournisseur);
    QSqlQueryModel * trierFournisseurparId();
    QSqlQueryModel * trierFournisseurparNom();
    QSqlQueryModel * trierFournisseuparNomEntreprise();


    QSqlQueryModel* RechercheFournisseur(QString recherche);
};

#endif // FOURNISSEUR_H
