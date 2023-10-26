#ifndef FOURN_H
#define FOURN_H

#include <QDialog>
#include <QIntValidator>
#include "fournisseur.h"

namespace Ui {
class fourn;
}

class fourn : public QDialog
{
    Q_OBJECT

public:
    explicit fourn(QWidget *parent = nullptr);
    ~fourn();

private slots:
    void on_ajouter_clicked();
    void on_modifier_clicked();
    void on_modifier_2_clicked();
    void on_supprimer_clicked();

    void on_Emp_2_currentChanged(int index);

private:
    Ui::fourn *ui;
    fournisseur f;
};

#endif // FOURN_H
