#include "mainwindow.h"
#include <QApplication>
#include "ui_mainwindow.h"
#include <QCloseEvent>
#include "clickablelabel.h"
#include <iostream>
#include <QPushButton>
#include "rh.h"
#include <sstream>
#include <QPixmap>
#include <QLabel>

using namespace std;

user MainWindow::curr_user;

MainWindow::MainWindow( QWidget *parent)
                       : QMainWindow(parent),
                         ui(new Ui::MainWindow)
{

    curr_user.set_cin("123456");
    //ARDUINO-----------------------------------------------------------------
    ret=A.connect_arduino(); // lancer la connexion à arduino
        switch(ret){
        case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
            break;
        case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
           break;
        case(-1):qDebug() << "arduino is not available";
        }

    //ARDUINO-----------------------------------------------------------------



    qDebug() << "MainWindow constructor - curr_user value: " << curr_user.get_cin();
    //page 1
    profil_shown=false;
    login_status=false;
    isSignupOpen=false;
    pass_visible=false;
    ui->setupUi(this);
    ui->pushButton_login->hide();
    ui->label_wrong->setVisible(false);
    //ui->label_Menu->raise()
    //hide & show login button   need password written to be showed
    connect(ui->lineEdit_password, &QLineEdit::textChanged, this, &MainWindow::Show_Button_Login);
    connect(ui->label_signup,&ClickableLabel::clicked,this,&MainWindow::click_signup);
    connect(ui->label_profil, &ClickableLabel::clicked, this, &MainWindow::set_profilshown_status);
    connect(ui->label_profil, &ClickableLabel::clicked, this, &MainWindow::show_profil);
    connect(this,&MainWindow::login_status_changed,this,&MainWindow::enable_disable_signout_btn);
    connect(ui->label_eye,&ClickableLabel::clicked,this,&MainWindow::hide_show_pass);

    ui->groupBox_2->setVisible(false);


    //page 2
    ui->groupBox_4->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);    
    connect(ui->label_profil_2, &ClickableLabel::clicked, this, &MainWindow::set_profilshown_status);
    connect(ui->label_profil_2, &ClickableLabel::clicked, this, &MainWindow::show_profil);
    ui->groupBox_4->setVisible(false);




    // Create a pushbutton For Admin
        QPushButton *admin_btn = new QPushButton("", this);

        // Set the button's size (optional)
        admin_btn->setFixedSize(300, 200);

        // Set an icon for the button (optional)
        QIcon icon(":/img/image/admin.jpg");  // Replace with the actual path to your icon

        admin_btn->setIcon(icon);
        admin_btn->setIconSize(admin_btn->size());

        // Add the button to the horizontal layout
        ui->horizontalLayout->addWidget(admin_btn);

     // Create a pushbutton For Gestion
        QPushButton *GestionEmp_btn = new QPushButton("", this);

        // Set the button's size (optional)
        GestionEmp_btn->setFixedSize(300, 200);

        // Set an icon for the button (optional)
        QIcon icon1(":/img/image/Gestion_emp.jpg");  // Replace with the actual path to your icon

        GestionEmp_btn->setIcon(icon1);
        GestionEmp_btn->setIconSize(GestionEmp_btn->size());

        // Add the button to the horizontal layout
        ui->horizontalLayout->addWidget(GestionEmp_btn);



        connect(admin_btn,SIGNAL(clicked()),this,SLOT(onAdminButtonClicked()));
        //connect(GestionEmp_btn,SIGNAL(clicked()),this,SLOT(on_pushButton_admin_clicked()));





        if(ret==0)
        {
            // Create a pushbutton For Admin
                QPushButton *finger_btn = new QPushButton("", this);

                // Set the button's size (optional)
                finger_btn->setFixedSize(50, 50);

                // Set an icon for the button (optional)
                QIcon icon(":/img/image/fingerprint.png");  // Replace with the actual path to your icon

                finger_btn->setIcon(icon);
                finger_btn->setIconSize(finger_btn->size());


                // Add the button to the horizontal layout
                ui->verticalLayout_3->addWidget(finger_btn);

                connect(finger_btn,SIGNAL(clicked()),this,SLOT(fingerprint_clicked()));


        }
        else
        {
            //ui->pushButton_login->raise();
        }







}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::set_stackedwidget_page(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}
void MainWindow::set_profilshown_status()
{
    if(ui->stackedWidget->currentIndex()==0)
    {
        if(profil_shown)
            profil_shown=false;
        else
            profil_shown=true;
    }
    else if(ui->stackedWidget->currentIndex()==1)
    {
        if(profil_shown)
            profil_shown=false;
        else
            profil_shown=true;
    }
}
void MainWindow::show_profil()
{
    if(ui->stackedWidget->currentIndex()==0)
    {
        if(profil_shown)
            ui->groupBox_2->setVisible(true);
        else
            ui->groupBox_2->setVisible(false);
    }
    else if(ui->stackedWidget->currentIndex()==1)
    {
        if(profil_shown)
            ui->groupBox_4->setVisible(true);
        else
            ui->groupBox_4->setVisible(false);
    }



}
void MainWindow::enable_disable_signout_btn()
{
    ui->pushButton_signout1->setEnabled(login_status);
    ui->pushButton_signout2->setEnabled(login_status);

}
void MainWindow::set_login_status(bool status)
{
    login_status = status;
}
void MainWindow::hide_show_pass()
{
    if(pass_visible)
    {
        pass_visible=false;
        QPixmap pixmap(":/img/image/eyes_close.png");
        ui->label_eye->setPixmap(pixmap);
        ui->label_eye->setScaledContents(true);
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);


    }
    else
    {
        pass_visible=true;
        QPixmap pixmap(":/img/image/eyes_open.png");
        ui->label_eye->setPixmap(pixmap);
        ui->label_eye->setScaledContents(true);
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);

    }
}






void MainWindow::on_pushButton_login_clicked()
{
    
   checkPassword();

}

void MainWindow::checkPassword()
{
    QString email = ui->lineEdit_username->text();
    QString password  = ui->lineEdit_password->text();

    QSqlQuery query;

    query.prepare("SELECT id_user FROM users WHERE (email= :email OR username = :email) AND password = :password");
    query.bindValue(":email",email);
    query.bindValue(":password",password);

    if(query.exec()&&query.next())
    {
        ui->lineEdit_password->clear();
        ui->lineEdit_username->clear();

        ui->label_wrong->setVisible(false);
        //ui->checkBox_stayLogin->setChecked(false);
        login_status=true;
        emit login_status_changed();
        cout<<"we are here1 "<<endl;
        if(ui->checkBox_stayLogin->isChecked())
        {
            QSqlQuery query2;
            query2.prepare("INSERT INTO logs (LAST_LOGIN_ID) VALUES (:last_login)");
            query2.bindValue(":last_login",query.value(0).toString());
            if(query2.exec())
            cout<<"checked ::: !!!!!!!!!!!!!!!!!"<<endl;

            else cout<<"we are hereee "<<endl;
            

        }
        
        ui->stackedWidget->setCurrentIndex(1);
        ui->groupBox_4->setVisible(false);
        profil_shown=false;

    }
    else
    {
        login_status=false;
        emit login_status_changed();
        ui->label_wrong->setVisible(true);
    }

}


void MainWindow::Show_Button_Login()
{
    if (ui->lineEdit_password->text().isEmpty()) {
        ui->pushButton_login->hide();
    } else {
        ui->pushButton_login->show();
        ui->pushButton_login->raise();
    }
}

void MainWindow::click_signup()
{
    if (!isSignupOpen){
        isSignupOpen = true;
    Signup w;
    w.show();
    w.exec();
    isSignupOpen = false;
    }
}






void MainWindow::on_pushButton_exit2_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_signout2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    this->set_login_status(false);
    emit login_status_changed();
    profil_shown=false;
    ui->groupBox_2->setVisible(false);

    QSqlQuery query;
    query.prepare("DELETE FROM LOGS");
    query.exec();

}

void MainWindow::on_pushButton_exit1_clicked()
{
    this->close();
}




void MainWindow::onAdminButtonClicked()
{
    this->hide();

    // Create the rh window if it doesn't exist
    rh *w_rh = new rh(MainWindow::curr_user);

    // Connect the destroyed signal to the onRhWindowClosed slot
    connect(w_rh, &QObject::destroyed, this, &MainWindow::onRhWindowClosed);

    w_rh->show();
    w_rh->activateWindow();

}

void MainWindow::onRhWindowClosed()
{
    this->show();
    qDebug() << "Rh window is closed";
    // Perform any additional actions after rh is closed

    // Make sure to manage the memory of dynamically allocated objects

}


void MainWindow::fingerprint_clicked()
{
    cout<<"clicked"<<endl;
    Log_viafinger();

}

void MainWindow::Log_viafinger()
{
    A.write_to_arduino("SEARCH");
    data=A.read_from_arduino();
    //cout<<"1"<<endl;
    int number=-1;
    //qDebug()<<data<<endl;
    //cout<<"2"<<endl;

    QString stringFromByteArray = QString::fromUtf8(data);
    string data_str =stringFromByteArray.toStdString();

    // Check if the string contains "Found ID #"
       if (stringFromByteArray.contains("Found ID #")) {
           // Extract the number after "Found ID #"
           number = stringFromByteArray.midRef(stringFromByteArray.indexOf("#") + 1).toInt();
           std::cout << "Found ID: " << number << std::endl;
       } else {
           std::cout << "Invalid format: " << stringFromByteArray.toStdString() << std::endl;
       }






       //partie connection
       if(number!=-1)
       {QSqlQuery query;
       query.prepare("SELECT * FROM users WHERE ID_FINGER=:id_f");
       query.bindValue(":id_f",number);


       if(query.exec()&&query.next())
       {
           ui->lineEdit_password->clear();
           ui->lineEdit_username->clear();

           ui->label_wrong->setVisible(false);
           //ui->checkBox_stayLogin->setChecked(false);
           login_status=true;
           emit login_status_changed();
           cout<<"we are here1 "<<endl;
           if(ui->checkBox_stayLogin->isChecked())
           {
               QSqlQuery query2;
               query2.prepare("INSERT INTO logs (LAST_LOGIN_ID) VALUES (:last_login)");
               query2.bindValue(":last_login",query.value(0).toString());
               if(query2.exec())
               cout<<"checked ::: !!!!!!!!!!!!!!!!!"<<endl;

               else cout<<"we are hereee "<<endl;


           }
            curr_user.set_email(query.value(0).toString());
            curr_user.set_password(query.value(1).toString());
            curr_user.set_cin(query.value(2).toString());
            curr_user.set_id_user(query.value(2).toString());
            curr_user.set_username(query.value(3).toString());
            curr_user.set_role(query.value(4).toString());
            curr_user.set_nom(query.value(5).toString());
            curr_user.set_prenom(query.value(6).toString());
            curr_user.set_sexe(query.value(7).toString());
            curr_user.set_date_naiss(query.value(9).toDate());
            //curr_user.set_role(query.value(4).toString());
            QString nom_prenom="SUCCESS:"+curr_user.get_nom()+" "+curr_user.get_prenom();
            QByteArray nom_prenom2 = nom_prenom.toUtf8();

            A.write_to_arduino(nom_prenom2);

            qDebug()<<curr_user.get_cin()<<endl;




           ui->stackedWidget->setCurrentIndex(1);
           ui->groupBox_4->setVisible(false);
           profil_shown=false;

       }
       else
       {
           login_status=false;
           emit login_status_changed();
           ui->label_wrong->setVisible(true);
       }
       }
       else
       {
           ui->label_wrong->setVisible(true);

       }



}


























