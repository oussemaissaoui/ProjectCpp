#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>

#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void checkPassword();
    bool get_login_status(){return login_status;}
    void Show_Button_Login();
    void handleMouseEnter();
    void click_signup();
    void handleMouseLeave();




private slots:


    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    bool login_status;
};
#endif // MAINWINDOW_H
