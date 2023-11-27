#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"Facture.h"
#include "arduino.h"
#include <QDebug>
#include <QPieSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtSql>




namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_ajouter_clicked();

    void on_pushButton_modifier_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_ajouter_2_clicked();

    void on_pushButton_PDF_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_radioButton_clicked();

    void on_pushButton_PDF_2_clicked();

    void on_pushButton_Statistique_clicked();

    void on_qr_clicked();
    void notification();

    void update_label();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_21_clicked();

private:
    Ui::Dialog *ui;
    Facture Stmp;
    Facture f;
    arduino A;
    QByteArray data;
};

#endif // DIALOG_H
