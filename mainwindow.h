#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "piece.h"
#include "arduino.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
    Ui::MainWindow *ui;
    QByteArray data;
    Arduino A;
};

#endif // MAINWINDOW_H
