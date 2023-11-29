#include "piece.h"
#include <QString>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QObject>
#include <QMessageBox>
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QPdfWriter>
#include <QPainter>
//#include <poppler-qt5.h>
Piece::Piece()
{
    REFERENCE="";
    CATEGORIE="";
    FOURNISSEUR="";
    MARQUE="";
    NB_PIECE=0;
    PRIX_UNIT=0;
}
Piece::Piece(QString REFERENCE,QString CATEGORIE,QString FOURNISSEUR,QString MARQUE,int NB_PIECE,int PRIX_UNIT)
{
    this->REFERENCE=REFERENCE;
    this->CATEGORIE=CATEGORIE;
    this->FOURNISSEUR=FOURNISSEUR;
    this->MARQUE=MARQUE;
    this->NB_PIECE=NB_PIECE;
    this->PRIX_UNIT=PRIX_UNIT;
}
QString Piece::get_reference(){return REFERENCE;}
QString Piece::get_categorie(){return CATEGORIE;}
QString Piece::get_fournisseur(){return FOURNISSEUR;}
QString Piece::get_marque(){return MARQUE;}
int Piece::get_nb_piece(){return NB_PIECE;}
int Piece::get_prix_unit(){return PRIX_UNIT;}
void Piece::setreference(QString REFERENCE){this->REFERENCE=REFERENCE;}
void Piece::setcategorie(QString CATEGORIE){this->CATEGORIE=CATEGORIE;}
void Piece::setfournisseur(QString FOURNISSEUR){this->FOURNISSEUR=FOURNISSEUR;}
void Piece::setmarque(QString MARQUE){this->MARQUE=MARQUE;}
void Piece::setnbpiece(int NB_PIECE){this->NB_PIECE=NB_PIECE;}
void Piece::setprixunit(int PRIX_UNIT){this->PRIX_UNIT=PRIX_UNIT;}
int Piece:: total_pneus()
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM PIECE");

     query.exec();
     int rows = 0;
     while(query.next()) {
         rows = query.value(0).toInt();
     }

     return rows ;
}
int Piece:: total_feux()
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM PIECE");

     query.exec();
     int rows = 0;
     while(query.next()) {
         rows = query.value(0).toInt();
     }

     return rows ;
}
int Piece:: total_batteries()
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM PIECE");

     query.exec();
     int rows = 0;
     while(query.next()) {
         rows = query.value(0).toInt();
     }

     return rows ;
}
int Piece:: total_climatiseurs()
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM PIECE");

     query.exec();
     int rows = 0;
     while(query.next()) {
         rows = query.value(0).toInt();
     }

     return rows ;
}
bool Piece::ajouter()
{
    QSqlQuery query;
    QString nb_piece_string=QString::number(NB_PIECE);
    QString prix_unit_string=QString::number(PRIX_UNIT);
    query.prepare("INSERT INTO PIECE (REFERENCE, CATEGORIE, FOURNISSEUR,MARQUE,NB_PIECE,PRIX_UNIT) "
                        "VALUES (:REFERENCE, :CATEGORIE, :FOURNISSEUR, :MARQUE, :NB_PIECE, :PRIX_UNIT)");



    query.bindValue(":REFERENCE",get_reference());
    query.bindValue(":CATEGORIE",CATEGORIE);
    query.bindValue(":FOURNISSEUR",FOURNISSEUR);
    query.bindValue(":MARQUE",MARQUE);
    query.bindValue(":NB_PIECE",nb_piece_string);
    query.bindValue(":PRIX_UNIT", prix_unit_string);
    return query.exec();
}
QSqlQueryModel* Piece::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT* FROM PIECE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Categorie"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Fournisseur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Marque"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Nombre de Pieces"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Prix Unitaire"));
    return model;
}
bool Piece::supprimer(QString REFERENCE)
{
    QSqlQuery query;
    QString nb_piece_string=QString::number(NB_PIECE);
    QString prix_unit_string=QString::number(PRIX_UNIT);
    query.prepare("Delete from PIECE where REFERENCE=:REFERENCE");
    query.bindValue(":REFERENCE",REFERENCE);
    return query.exec();
}
bool Piece::modifier(QString REFERENCE)
{

    QSqlQuery query;
    QString nb_piece_string= QString::number(NB_PIECE);
    QString prix_unit_string= QString::number(PRIX_UNIT);
    query.prepare("UPDATE PIECE SET REFERENCE= :REFERENCE, CATEGORIE=:CATEGORIE, FOURNISSEUR=:FOURNISSEUR, MARQUE=:MARQUE,NB_PIECE=:NB_PIECE,PRIX_UNIT=:PRIX_UNIT WHERE REFERENCE=:REFERENCE");
    query.bindValue(":REFERENCE", REFERENCE);
    query.bindValue(":CATEGORIE", CATEGORIE);
    query.bindValue(":FOURNISSEUR", FOURNISSEUR);
    query.bindValue(":MARQUE", MARQUE);
    query.bindValue(":NB_PIECE", nb_piece_string);
    query.bindValue(":PRIX_UNIT", prix_unit_string);
    return query.exec();
}
QSqlQueryModel * Piece::rechercherPiece(QString REFERENCE)

{
        QSqlQueryModel *model = new QSqlQueryModel();
        QSqlQuery query;
        query.prepare("SELECT * FROM PIECE WHERE REFERENCE = :REFERENCE");
        query.bindValue(":REFERENCE", REFERENCE);
            query.exec();
            model->setQuery(query);
            return model;
}
QSqlQueryModel* Piece::trierPiece()
{
      QSqlQueryModel *model= new QSqlQueryModel() ;
      model->setQuery("select * from PIECE order by CATEGORIE ASC");
      return model ;
}
/*void Piece::createPDF(const QList<Piece> &pieces) {
    // Créer un fichier PDF
    QPdfWriter pdfWriter("Liste_Pieces.pdf");
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setPageMargins(QMarginsF(10, 10, 10, 10), QPageLayout::Millimeter);

    // Ouvrir le fichier PDF en tant que document
    QPainter painter(&pdfWriter);
    painter.setRenderHint(QPainter::Antialiasing);

    // Commencer à dessiner sur le document PDF
    painter.drawText(100, 100, "Liste des Pièces :");

    // Dessiner la liste des pièces
    int y = 120;
    for (const Piece &piece : pieces) {
        y += 20;
        QString pieceInfo = QString("Référence: %1, Catégorie: %2, Fournisseur: %3, Marque: %4, "
                                   "Nombre de pièces: %5, Prix unitaire: %6")
                                   .arg(piece.REFERENCE())
                                   .arg(piece.CATEGORIE())
                                   .arg(piece.FOURNISSEUR())
                                   .arg(piece.MARQUE())
                                   .arg(QString::number(piece.NB_PIECE()))
                                   .arg(QString::number(piece.PRIX_UNIT()));
        painter.drawText(120, y, pieceInfo);
    }

    // Terminer la peinture
    painter.end();
}*/
