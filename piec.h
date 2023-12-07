#ifndef PIEC_H
#define PIEC_H
#include "piece.h"
#include "arduino.h"
#include <QDialog>

namespace Ui {
class piec;
}

class piec : public QDialog
{
    Q_OBJECT

public:
    explicit piec(QWidget *parent = nullptr);
    ~piec();
private slots:
    void on_pushButton_Valider_2_clicked();

    void on_pushButton_Supprimer_clicked();

    void on_pushButton_Modifier_clicked();

    void on_pushButton_Chercher_3_clicked();

    void on_pushButton_Trier_clicked();

    void on_pushButton_statistiques_clicked();

    void on_pushButton_PDF_clicked();

    void sendMail();

    void mailSent(QString);

    void on_sendBtn_clicked();

    void on_pushButton_quantite_clicked();



private:
    Ui::piec *ui;
    QByteArray data;
        Arduino A;
};

#endif // PIEC_H
