#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "voiture.h"
#include <QMessageBox>


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
    void on_bnt_ajout_clicked();

    void on_btn_supp_clicked();

    void on_bnt_modif_clicked();

private:
    Ui::MainWindow *ui;
    voiture V;
};

#endif // MAINWINDOW_H
