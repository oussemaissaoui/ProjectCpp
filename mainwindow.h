#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "reservation.h"
#include <QMainWindow>
#include <iostream>
#include "arduino.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void SetLineEdit_value();

private slots:
    void on_ajouter_clicked();
    void on_pushButton_clicked();
    void on_ajouter_3_clicked();
    void on_recherche_clicked();
    void on_pushButton_3_clicked();
    void on_GENERER_PDF_clicked();    
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_GENERER_PDF_2_clicked();

    void on_pushButton_check_clicked();

private:
    Ui::MainWindow *ui;
    Reservation Etmp;
    Arduino A;
    int test;

};
#endif // MAINWINDOW_H
