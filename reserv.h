#ifndef RESERV_H
#define RESERV_H

#include <QDialog>
#include <QMainWindow>
#include "reservation.h"
#include <iostream>
#include "arduino.h"

namespace Ui {
class Reserv;
}

class Reserv : public QDialog
{
    Q_OBJECT

public:
    explicit Reserv(QWidget *parent = nullptr);
    ~Reserv();
    void SetLineEdit_value();

private slots:
    void on_ajouter_clicked();

    void on_pushButton_6_clicked();

    void on_ajouter_4_clicked();

    void on_recherche_clicked();

    void on_pushButton_3_clicked();

    void on_GENERER_PDF_2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_check_clicked();

private:
    Ui::Reserv *ui;
    Reservation Etmp;
    Arduino A;
    int test;
};

#endif // RESERV_H
