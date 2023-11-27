#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>
#include "clickablelabel.h"
#include "signup.h"
#include "rh.h"
#include <QApplication>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void checkPassword();
    bool get_login_status(){return login_status;}
    void set_login_status(bool);


    void Show_Button_Login();
    void handleMouseEnter();
    void click_signup();
    void handleMouseLeave();
    void set_stackedwidget_page(int index);
    void hide_show_pass();


signals:
    void login_status_changed();






private slots:
    void show_profil();
    void set_profilshown_status();
    void on_pushButton_login_clicked();
    void enable_disable_signout_btn();
    void onAdminButtonClicked();

    void onRhWindowClosed();


    void on_pushButton_exit2_clicked();

    void on_pushButton_signout2_clicked();

    void on_pushButton_exit1_clicked();

private:
    Ui::MainWindow *ui;
    bool login_status;
    bool profil_shown;
    bool isSignupOpen;
    bool pass_visible;






};
#endif // MAINWINDOW_H


