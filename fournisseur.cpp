#include "fournisseur.h"
#include "connection.h"
#include <QDebug>

fournisseur::fournisseur() {}

fournisseur::fournisseur(QString id, QString nom, QString prenom, int cin, qint64 tel, QString nom_entreprise, QString sexe, QString email) {
    this->id = id;
    this->nom = nom;
    this->prenom = prenom;
    this->cin = cin;
    this->tel = tel;
    this->nom_entreprise = nom_entreprise;
    this->sexe = sexe;
    this->email = email;
}

bool fournisseur::ajouter() {
Connection c;

    QSqlQuery query;

    query.prepare("INSERT INTO FOURNISSEUR (ID, NOM, PRENOM, CIN, TEL, NOM_ENTREPRISE, SEXE, EMAIL) VALUES (:ID, :NOM, :PRENOM, :CIN, :TEL, :NOM_ENTREPRISE, :SEXE, :EMAIL);");
    std::srand(std::time(0));

      // Génération d'une valeur aléatoire entre 100 et 999 inclus
      int nombre = std::rand() % 900 + 100;

    //int randomid=rand(10);
    query.bindValue(":ID", nombre);
    query.bindValue(":NOM", nom);

    query.bindValue(":PRENOM", prenom);

    query.bindValue(":CIN",QString::number( cin));

    query.bindValue(":TEL", QString::number( tel));

    query.bindValue(":NOM_ENTREPRISE", nom_entreprise);

    query.bindValue(":SEXE", sexe);

    query.bindValue(":EMAIL", email);


    return query.exec();
}

QSqlQueryModel* fournisseur::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FOURNISSEUR");
    // Set headers if needed
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("NOM_ENTREPRISE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));
    return model;
}

QSqlQueryModel* fournisseur::tritype(const QString &aux) {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM FOURNISSEUR ORDER BY " + aux + " ASC");

    // Set headers for each field
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("NOM_ENTREPRISE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));

    return model;
}
int fournisseur::Supprimer(int cin)
{
    QSqlQuery query;
    query.prepare("DELETE FROM fournisseur WHERE cin = :cin");
    query.bindValue(":cin", cin);

    if (query.exec())
    {
        if (query.numRowsAffected() > 0)
            return 1; // Suppression succeeded
        else
            return 2; // No matching record found
    }
    return 0; // Suppression failed
}



fournisseur fournisseur::modifier(QString id) {
    fournisseur fournisseur;
      QSqlQuery query;
      query.prepare("SELECT * FROM FOURNISSEUR WHERE CIN = :id");
      query.bindValue(":id", id);

      if (query.exec() && query.next()) {
          fournisseur.setId(query.value(0).toString());
          fournisseur.setNom(query.value(1).toString());
          fournisseur.setPrenom(query.value(2).toString());
          fournisseur.setCin(query.value(3).toInt());
          fournisseur.setTel(query.value(4).toLongLong());
          fournisseur.setNomEntreprise(query.value(5).toString());
          fournisseur.setSexe(query.value(6).toString());
          fournisseur.setEmail(query.value(7).toString());
      }

      return fournisseur;
}

bool fournisseur::modifier2(QString id, fournisseur fournisseur) {
    QSqlQuery query;
    query.prepare("UPDATE FOURNISSEUR SET ID = :id, NOM = :nom, PRENOM = :prenom, CIN = :cin, TEL = :tel, NOM_ENTREPRISE = :nom_entreprise, SEXE = :sexe, EMAIL = :email WHERE ID = :id;");
    query.bindValue(":id", id);
    query.bindValue(":nom", fournisseur.getNom());
    query.bindValue(":prenom", fournisseur.getPrenom());
    query.bindValue(":cin", QString::number(fournisseur.getCin()));
    query.bindValue(":tel", QString::number(fournisseur.getTel()));
    query.bindValue(":nom_entreprise", fournisseur.getNomEntreprise());
    query.bindValue(":sexe", fournisseur.getSexe());
    query.bindValue(":email", fournisseur.getEmail());

    return query.exec();
}


QSqlQueryModel * fournisseur::trierFournisseurparId()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM fournisseur order by id ASC");
           q->exec();
           model->setQuery(*q);
           return model;
}


QSqlQueryModel * fournisseur::trierFournisseurparNom()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM fournisseur order by nom ASC");
           q->exec();
           model->setQuery(*q);
           return model;
}


QSqlQueryModel * fournisseur::trierFournisseuparNomEntreprise()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM fournisseur order by nom_entreprise ASC");
           q->exec();
           model->setQuery(*q);
           return model;
}


QSqlQueryModel* fournisseur::RechercheFournisseur(QString recherche)
 {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("SELECT * FROM fournisseur WHERE id LIKE '"+recherche+"%' OR nom LIKE '"+recherche+"%' OR prenom LIKE '"+recherche+"%'");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("TEL"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("NOM_ENTREPRISE"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("SEXE"));
     model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));

return model;
}
