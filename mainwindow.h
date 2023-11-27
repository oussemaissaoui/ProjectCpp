#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "Facture.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ajout_bout_clicked();

    void on_affich_bout_clicked();

    void on_modif_bout_clicked();

    void on_supp_bout_clicked();

    void on_affichier_clicked();

private:
    Ui::MainWindow *ui;

    Facture Stmp;
    Facture f;

};
#endif // MAINWINDOW_H
