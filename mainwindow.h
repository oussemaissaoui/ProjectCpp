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
#include "user.h"
#include <QApplication>
#include <QDebug>
#include "arduino.h"
#include <QByteArray>
#include <string>
#include "reserv.h"
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool checkPassword();
    bool checkPassword(int state);
    bool get_login_status(){return login_status;}
    void set_login_status(bool);


    void Show_Button_Login();
    void handleMouseEnter();
    void click_signup();
    void handleMouseLeave();
    void set_stackedwidget_page(int index);
    void hide_show_pass();
    static user curr_user;
    void Log_viafinger();
    bool eventFilter(QObject *obj, QEvent *event);
    void add_Gestionbtn();


signals:
    void login_status_changed();






private slots:
    void show_profil();
    void set_profilshown_status();
    void on_pushButton_login_clicked();
    void enable_disable_signout_btn();
    void onAdminButtonClicked();
    void onReserButtonClicked();
    void onFournButtonClicked();

    void onRhWindowClosed();


    void on_pushButton_exit2_clicked();

    void on_pushButton_signout2_clicked();

    void on_pushButton_exit1_clicked();

    void fingerprint_clicked();


    void on_pushButton_setting2_clicked();

    void on_pushButton_setting1_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    bool login_status;
    bool profil_shown;
    bool isSignupOpen;
    bool pass_visible;
    int ret;
    Arduino A;
    QByteArray data;
    QPushButton *admin_btn,*GestionEmp_btn,*GestionRes_btn,*GestionFourn_btn;
    QLabel *admin_Lab,*GestionEmp_Lab,*GestionRes_Lab,*GestionFourn_Lab;
    int last_index;








};
#endif // MAINWINDOW_H


