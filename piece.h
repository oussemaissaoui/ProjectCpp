#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Piece
{
public:
    Piece();
    Piece(QString,QString,QString,QString,int,int);
    QString get_reference();
    QString get_categorie();
    QString get_fournisseur();
    QString get_marque();
    int get_nb_piece();
    int get_prix_unit();
    void setreference(QString);
    void setcategorie(QString);
    void setfournisseur(QString);
    void setmarque(QString);
    void setnbpiece(int);
    void setprixunit(int);
    int total_pneus();
    int total_feux();
    int total_batteries();
    int total_climatiseurs();
    QSqlQueryModel* afficher();
    bool ajouter();
    bool supprimer(QString);
    bool modifier(QString REFERENCE);
    QSqlQueryModel* rechercherPiece(QString REFERENCE);
    QSqlQueryModel* trierPiece();
    void createPDF(const QList<Piece> &pieces);
private:
    QString REFERENCE,CATEGORIE,FOURNISSEUR,MARQUE;
    int NB_PIECE;
    int PRIX_UNIT;
};

#endif // PIECE_H
