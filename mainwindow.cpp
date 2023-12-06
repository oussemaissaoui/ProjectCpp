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
#include <QGraphicsDropShadowEffect>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include "fourn.h"

using namespace std;

user MainWindow::curr_user;

MainWindow::MainWindow( QWidget *parent)
                       : QMainWindow(parent),
                         ui(new Ui::MainWindow)
{
    admin_btn=nullptr;
    GestionEmp_btn=nullptr;
    GestionRes_btn=nullptr;
    curr_user.set_cin("123456");
    last_index=0;
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






        if(ret==0)
        {

            // Create a pushbutton For Finger Login
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
    
   if(checkPassword())
   {
       /*QHBoxLayout *horizontalLayout = new QHBoxLayout;
        QHBoxLayout *currentHLayout = horizontalLayout;
        ui->verticalLayout_4->addLayout(horizontalLayout);
    if(curr_user.get_role()=="Admin"){// Create a pushbutton For Admin

       admin_btn = new QPushButton("", this);

       // Set the button's size (optional)
       admin_btn->setFixedSize(250,150 );


       // Set an icon for the button (optional)
       QIcon icon(":/img/image/admin.jpg");  // Replace with the actual path to your icon

       admin_btn->setIcon(icon);
       QSize size(200,130);
       admin_btn->setIconSize(size);
       currentHLayout->addWidget(admin_btn);

       // Add the button to the horizontal layout
       if(currentHLayout->count()%3==0)
       {
            QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
            currentHLayout = newhorizontalLayout;
            ui->verticalLayout_4->addLayout(newhorizontalLayout);

       }

       admin_btn->setStyleSheet("QPushButton:hover{background-color: rgb(255, 255, 255);"
                                "border: 5px solid black;"
                                "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                                "border-radius:15px;}"
                                 "QPushButton{background-color: rgb(255, 255, 255);"
                                   "border: 5px solid black;"
                                   "border-radius:15px;}"


                                );
       // Create a drop shadow effect
           QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
           drop_shadow->setBlurRadius(20);
           drop_shadow->setColor(QColor(255, 215, 0, 255));
           drop_shadow->setOffset(10, 20);

           admin_btn->setMouseTracking(true);

              // Install an event filter to handle enterEvent and leaveEvent
              admin_btn->installEventFilter(this);





       // Connect the hovered signal to a lambda function that sets the graphics effect

       connect(admin_btn,SIGNAL(clicked()),this,SLOT(onAdminButtonClicked()));
        //add text under btn
        admin_Lab = new QLabel;
        admin_Lab->setText("Gestion Admin");
        admin_Lab->setGeometry(admin_btn->x() , admin_btn->x()+admin_btn->height(),250,25);
        //admin_Lab->set


       }
    if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_emp
        GestionEmp_btn = new QPushButton("", this);

        // Set the button's size (optional)
        GestionEmp_btn->setFixedSize(250,150 );

        // Set an icon for the button (optional)
        QIcon icon(":/img/image/Gestion_emp.jpg");  // Replace with the actual path to your icon

        GestionEmp_btn->setIcon(icon);
        QSize size(250,130 );
        GestionEmp_btn->setIconSize(size);
        currentHLayout->addWidget(GestionEmp_btn);

        // Add the button to the horizontal layout
        if(currentHLayout->count()%3==0)
        {
             QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
             currentHLayout = newhorizontalLayout;
             ui->verticalLayout_4->addLayout(newhorizontalLayout);

        }

        GestionEmp_btn->setStyleSheet("QPushButton:hover{background-color: rgb(71,186, 205);"
                                 "border: 5px solid black;"
                                 "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                                 "border-radius:15px;}"
                                  "QPushButton{background-color: rgb(71,186, 205);;"
                                    "border: 5px solid black;"
                                    "border-radius:15px;}"


                                 );
        // Create a drop shadow effect
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(20);
            drop_shadow->setColor(QColor(255, 215, 0, 255));
            drop_shadow->setOffset(10, 20);

            GestionEmp_btn->setMouseTracking(true);

               // Install an event filter to handle enterEvent and leaveEvent
               GestionEmp_btn->installEventFilter(this);




        // Connect the hovered signal to a lambda function that sets the graphics effect

        connect(GestionEmp_btn,SIGNAL(clicked()),this,SLOT(onAdminButtonClicked()));

       }

    if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_reservation
        GestionRes_btn = new QPushButton("", this);

        // Set the button's size (optional)
        GestionRes_btn->setFixedSize(250,150 );

        // Set an icon for the button (optional)
        QIcon icon(":/img/image/Gestion_reservation.jpg");  // Replace with the actual path to your icon

        GestionRes_btn->setIcon(icon);
        QSize size(250,130);
        GestionRes_btn->setIconSize(size);
        currentHLayout->addWidget(GestionRes_btn);

        // Add the button to the horizontal layout
        if(currentHLayout->count()%3==0)
        {
             QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
             currentHLayout = newhorizontalLayout;
             ui->verticalLayout_4->addLayout(newhorizontalLayout);

        }

        GestionRes_btn->setStyleSheet("QPushButton:hover{background-color: rgb(27, 40, 72);"
                                 "border: 5px solid black;"
                                 "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                                 "border-radius:15px;}"
                                  "QPushButton{background-color: rgb(27, 40, 72);"
                                    "border: 5px solid black;"
                                    "border-radius:15px;}"


                                 );
        // Create a drop shadow effect
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(20);
            drop_shadow->setColor(QColor(255, 215, 0, 255));
            drop_shadow->setOffset(10, 20);

            GestionRes_btn->setMouseTracking(true);

               // Install an event filter to handle enterEvent and leaveEvent
               GestionRes_btn->installEventFilter(this);




        // Connect the hovered signal to a lambda function that sets the graphics effect

        connect(GestionRes_btn,SIGNAL(clicked()),this,SLOT(onReserButtonClicked()));
       }
    if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_reservation
        GestionFourn_btn = new QPushButton("", this);

        // Set the button's size (optional)
        GestionFourn_btn->setFixedSize(250,150 );

        // Set an icon for the button (optional)
        QIcon icon(":/img/image/Gestion_fournisseur.png");  // Replace with the actual path to your icon

        GestionFourn_btn->setIcon(icon);
        QSize size(250,130);
        GestionFourn_btn->setIconSize(size);
        currentHLayout->addWidget(GestionFourn_btn);

        // Add the button to the horizontal layout
        if(currentHLayout->count()%3==0)
        {
             QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
             currentHLayout = newhorizontalLayout;
             ui->verticalLayout_4->addLayout(newhorizontalLayout);

        }

        GestionFourn_btn->setStyleSheet("QPushButton:hover{background-color: rgb(27, 40, 72);"
                                 "border: 5px solid black;"
                                 "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                                 "border-radius:15px;}"
                                  "QPushButton{background-color: rgb(27, 40, 72);"
                                    "border: 5px solid black;"
                                    "border-radius:15px;}"


                                 );
        // Create a drop shadow effect
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(20);
            drop_shadow->setColor(QColor(255, 215, 0, 255));
            drop_shadow->setOffset(10, 20);

            GestionFourn_btn->setMouseTracking(true);

               // Install an event filter to handle enterEvent and leaveEvent
               GestionFourn_btn->installEventFilter(this);




        // Connect the hovered signal to a lambda function that sets the graphics effect

        connect(GestionFourn_btn,SIGNAL(clicked()),this,SLOT(onFournButtonClicked()));
       }
        */

        add_Gestionbtn();
   }

}

void MainWindow::add_Gestionbtn()
{
    ui->label_nameprofil->setText(curr_user.get_nom()+" "+curr_user.get_prenom()+"#"+curr_user.get_role());

    QHBoxLayout *horizontalLayout = new QHBoxLayout;
     QHBoxLayout *currentHLayout = horizontalLayout;
     ui->verticalLayout_4->addLayout(horizontalLayout);
 if(curr_user.get_role()=="Admin"){// Create a pushbutton For Admin

    admin_btn = new QPushButton("", this);

    // Set the button's size (optional)
    admin_btn->setFixedSize(250,150 );


    // Set an icon for the button (optional)
    QIcon icon(":/img/image/admin.jpg");  // Replace with the actual path to your icon

    admin_btn->setIcon(icon);
    QSize size(200,130);
    admin_btn->setIconSize(size);
    currentHLayout->addWidget(admin_btn);

    // Add the button to the horizontal layout
    if(currentHLayout->count()%3==0)
    {
         QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
         currentHLayout = newhorizontalLayout;
         ui->verticalLayout_4->addLayout(newhorizontalLayout);

    }

    admin_btn->setStyleSheet("QPushButton:hover{background-color: rgb(255, 255, 255);"
                             "border: 5px solid black;"
                             "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                             "border-radius:15px;}"
                              "QPushButton{background-color: rgb(255, 255, 255);"
                                "border: 5px solid black;"
                                "border-radius:15px;}"


                             );
    // Create a drop shadow effect
        QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
        drop_shadow->setBlurRadius(20);
        drop_shadow->setColor(QColor(255, 215, 0, 255));
        drop_shadow->setOffset(10, 20);

        admin_btn->setMouseTracking(true);

           // Install an event filter to handle enterEvent and leaveEvent
           admin_btn->installEventFilter(this);





    // Connect the hovered signal to a lambda function that sets the graphics effect

    connect(admin_btn,SIGNAL(clicked()),this,SLOT(onAdminButtonClicked()));
     //add text under btn
     admin_Lab = new QLabel;
     admin_Lab->setText("Gestion Admin");
     admin_Lab->setGeometry(admin_btn->x() , admin_btn->x()+admin_btn->height(),250,25);
     //admin_Lab->set


    }
 if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_emp
     GestionEmp_btn = new QPushButton("", this);

     // Set the button's size (optional)
     GestionEmp_btn->setFixedSize(250,150 );

     // Set an icon for the button (optional)
     QIcon icon(":/img/image/Gestion_emp.jpg");  // Replace with the actual path to your icon

     GestionEmp_btn->setIcon(icon);
     QSize size(250,130 );
     GestionEmp_btn->setIconSize(size);
     currentHLayout->addWidget(GestionEmp_btn);

     // Add the button to the horizontal layout
     if(currentHLayout->count()%3==0)
     {
          QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
          currentHLayout = newhorizontalLayout;
          ui->verticalLayout_4->addLayout(newhorizontalLayout);

     }

     GestionEmp_btn->setStyleSheet("QPushButton:hover{background-color: rgb(71,186, 205);"
                              "border: 5px solid black;"
                              "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                              "border-radius:15px;}"
                               "QPushButton{background-color: rgb(71,186, 205);;"
                                 "border: 5px solid black;"
                                 "border-radius:15px;}"


                              );
     // Create a drop shadow effect
         QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
         drop_shadow->setBlurRadius(20);
         drop_shadow->setColor(QColor(255, 215, 0, 255));
         drop_shadow->setOffset(10, 20);

         GestionEmp_btn->setMouseTracking(true);

            // Install an event filter to handle enterEvent and leaveEvent
            GestionEmp_btn->installEventFilter(this);




     // Connect the hovered signal to a lambda function that sets the graphics effect

     connect(GestionEmp_btn,SIGNAL(clicked()),this,SLOT(onAdminButtonClicked()));

    }

 if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_reservation
     GestionRes_btn = new QPushButton("", this);

     // Set the button's size (optional)
     GestionRes_btn->setFixedSize(250,150 );

     // Set an icon for the button (optional)
     QIcon icon(":/img/image/Gestion_reservation.jpg");  // Replace with the actual path to your icon

     GestionRes_btn->setIcon(icon);
     QSize size(250,130);
     GestionRes_btn->setIconSize(size);
     currentHLayout->addWidget(GestionRes_btn);

     // Add the button to the horizontal layout
     if(currentHLayout->count()%3==0)
     {
          QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
          currentHLayout = newhorizontalLayout;
          ui->verticalLayout_4->addLayout(newhorizontalLayout);

     }

     GestionRes_btn->setStyleSheet("QPushButton:hover{background-color: rgb(27, 40, 72);"
                              "border: 5px solid black;"
                              "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                              "border-radius:15px;}"
                               "QPushButton{background-color: rgb(27, 40, 72);"
                                 "border: 5px solid black;"
                                 "border-radius:15px;}"


                              );
     // Create a drop shadow effect
         QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
         drop_shadow->setBlurRadius(20);
         drop_shadow->setColor(QColor(255, 215, 0, 255));
         drop_shadow->setOffset(10, 20);

         GestionRes_btn->setMouseTracking(true);

            // Install an event filter to handle enterEvent and leaveEvent
            GestionRes_btn->installEventFilter(this);




     // Connect the hovered signal to a lambda function that sets the graphics effect

     connect(GestionRes_btn,SIGNAL(clicked()),this,SLOT(onReserButtonClicked()));
    }
 if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_reservation
     GestionFourn_btn = new QPushButton("", this);

     // Set the button's size (optional)
     GestionFourn_btn->setFixedSize(250,150 );

     // Set an icon for the button (optional)
     QIcon icon(":/img/image/Gestion_fournisseur.png");  // Replace with the actual path to your icon

     GestionFourn_btn->setIcon(icon);
     QSize size(250,130);
     GestionFourn_btn->setIconSize(size);
     currentHLayout->addWidget(GestionFourn_btn);

     // Add the button to the horizontal layout
     if(currentHLayout->count()%3==0)
     {
          QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
          currentHLayout = newhorizontalLayout;
          ui->verticalLayout_4->addLayout(newhorizontalLayout);

     }

     GestionFourn_btn->setStyleSheet("QPushButton:hover{background-color: rgb(27, 40, 72);"
                              "border: 5px solid black;"
                              "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                              "border-radius:15px;}"
                               "QPushButton{background-color: rgb(27, 40, 72);"
                                 "border: 5px solid black;"
                                 "border-radius:15px;}"


                              );
     // Create a drop shadow effect
         QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
         drop_shadow->setBlurRadius(20);
         drop_shadow->setColor(QColor(255, 215, 0, 255));
         drop_shadow->setOffset(10, 20);

         GestionFourn_btn->setMouseTracking(true);

            // Install an event filter to handle enterEvent and leaveEvent
            GestionFourn_btn->installEventFilter(this);




     // Connect the hovered signal to a lambda function that sets the graphics effect

     connect(GestionFourn_btn,SIGNAL(clicked()),this,SLOT(onFournButtonClicked()));
    }

 if(curr_user.get_role()=="Admin" || curr_user.get_role()=="employe"){// Create a pushbutton For Gestion_reservation
     GestionFourn_btn = new QPushButton("", this);

     // Set the button's size (optional)
     GestionFourn_btn->setFixedSize(250,150 );

     // Set an icon for the button (optional)
     QIcon icon(":/img/image/Gestion_inventaire.jpg");  // Replace with the actual path to your icon

     GestionFourn_btn->setIcon(icon);
     QSize size(250,130);
     GestionFourn_btn->setIconSize(size);
     currentHLayout->addWidget(GestionFourn_btn);

     // Add the button to the horizontal layout
     if(currentHLayout->count()%3==0)
     {
          QHBoxLayout *newhorizontalLayout = new QHBoxLayout;
          currentHLayout = newhorizontalLayout;
          ui->verticalLayout_4->addLayout(newhorizontalLayout);

     }

     GestionFourn_btn->setStyleSheet("QPushButton:hover{background-color: rgb(27, 40, 72);"
                              "border: 5px solid black;"
                              "  box-shadow: rgba(72, 135, 202, 0.8) 0 0 90px 33px;"
                              "border-radius:15px;}"
                               "QPushButton{background-color: rgb(27, 40, 72);"
                                 "border: 5px solid black;"
                                 "border-radius:15px;}"


                              );
     // Create a drop shadow effect
         QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
         drop_shadow->setBlurRadius(20);
         drop_shadow->setColor(QColor(255, 215, 0, 255));
         drop_shadow->setOffset(10, 20);

         GestionFourn_btn->setMouseTracking(true);

            // Install an event filter to handle enterEvent and leaveEvent
            GestionFourn_btn->installEventFilter(this);




     // Connect the hovered signal to a lambda function that sets the graphics effect

     connect(GestionFourn_btn,SIGNAL(clicked()),this,SLOT(onFournButtonClicked()));
    }

}

void MainWindow::onReserButtonClicked()
{
    this->hide();

    // Create the rh window if it doesn't exist
    Reserv  *r = new Reserv;

    // Connect the destroyed signal to the onRhWindowClosed slot
    connect(r, &QDialog::finished, this, &MainWindow::onRhWindowClosed);

    r->show();
    r->activateWindow();

}

void MainWindow::onFournButtonClicked()
{
    this->hide();

    // Create the rh window if it doesn't exist
    fourn  *f = new fourn;

    // Connect the destroyed signal to the onRhWindowClosed slot
    connect(f, &QDialog::finished, this, &MainWindow::onRhWindowClosed);

    f->show();
    f->activateWindow();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    if (obj == admin_btn) {
        if (event->type() == QEvent::Enter) {
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(30);
            drop_shadow->setColor(QColor(255,215,0,255));
            drop_shadow->setOffset(0,0);
            admin_btn->setGraphicsEffect(drop_shadow);
        } else if (event->type() == QEvent::Leave) {
            // Mouse left the button
            admin_btn->setGraphicsEffect(nullptr);
        }
    }
    if (obj == GestionEmp_btn) {
        if (event->type() == QEvent::Enter) {
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(30);
            drop_shadow->setColor(QColor(255,215,0,255));
            drop_shadow->setOffset(0,0);
            GestionEmp_btn->setGraphicsEffect(drop_shadow);
        } else if (event->type() == QEvent::Leave) {
            // Mouse left the button
            GestionEmp_btn->setGraphicsEffect(nullptr);
        }
    }
    if (obj == GestionRes_btn) {
        if (event->type() == QEvent::Enter) {
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(30);
            drop_shadow->setColor(QColor(255,215,0,255));
            drop_shadow->setOffset(0,0);
            GestionRes_btn->setGraphicsEffect(drop_shadow);
        } else if (event->type() == QEvent::Leave) {
            // Mouse left the button
            GestionRes_btn->setGraphicsEffect(nullptr);
        }
    }
    if (obj == GestionFourn_btn) {
        if (event->type() == QEvent::Enter) {
            QGraphicsDropShadowEffect *drop_shadow = new QGraphicsDropShadowEffect();
            drop_shadow->setBlurRadius(30);
            drop_shadow->setColor(QColor(255,215,0,255));
            drop_shadow->setOffset(0,0);
            GestionFourn_btn->setGraphicsEffect(drop_shadow);
        } else if (event->type() == QEvent::Leave) {
            // Mouse left the button
            GestionFourn_btn->setGraphicsEffect(nullptr);
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

bool MainWindow::checkPassword()
{

    QString email = ui->lineEdit_username->text();
    QString password  = ui->lineEdit_password->text();

    QSqlQuery query;

    query.prepare("SELECT * FROM users WHERE (email= :email OR username = :email) AND password = :password");
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
            query2.bindValue(":last_login",query.value(2).toString());
            if(query2.exec())
            cout<<"checked ::: !!!!!!!!!!!!!!!!!"<<endl;

            else cout<<"we are hereee "<<endl;
            

        }
        
        ui->stackedWidget->setCurrentIndex(1);
        ui->groupBox_4->setVisible(false);
        profil_shown=false;

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
        ui->label_nameprofil->setText(curr_user.get_nom()+" "+curr_user.get_prenom()+"#"+curr_user.get_role());
        //()<<curr_user.get_username();
        return true;

    }
    else
    {
        login_status=false;
        emit login_status_changed();
        ui->label_wrong->setVisible(true);
        return false;
    }

}


bool MainWindow::checkPassword(int x)
{
    QSqlQuery query;

        // Assuming x is the user ID from the logs table
        query.prepare("SELECT * FROM users WHERE id_user = :id_user");
        query.bindValue(":id_user", x);
        if (query.exec() && query.next())
           {
               login_status = true;
               emit login_status_changed();
               cout << "we are here1 " << endl;

               if (ui->checkBox_stayLogin->isChecked())
               {
                   QSqlQuery query2;
                   query2.prepare("INSERT INTO logs (LAST_LOGIN_ID) VALUES (:last_login)");
                   query2.bindValue(":last_login", x); // Assuming x is the user ID
                   if (query2.exec())
                       cout << "checked ::: !!!!!!!!!!!!!!!!!" << endl;
                   else
                       cout << "we are hereee " << endl;
               }

               ui->stackedWidget->setCurrentIndex(1);
               ui->groupBox_4->setVisible(false);
               profil_shown=false;

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
               ui->label_nameprofil->setText(curr_user.get_nom()+" "+curr_user.get_prenom()+"#"+curr_user.get_role());
               add_Gestionbtn();
               return true;
           }
    else
    {
        login_status=false;
        emit login_status_changed();
        ui->label_wrong->setVisible(true);
        return false;
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
        A.close_arduino();
        ret=-1;
        qDebug()<<"ret = "<<ret<<endl;

    Signup w;
    w.show();
    w.exec();
    isSignupOpen = false;
    }
}

void MainWindow::on_pushButton_exit2_clicked()
{
    this->close();
    delete admin_btn;
    delete GestionEmp_btn;
    delete GestionRes_btn;
    delete GestionFourn_btn;
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
    if (admin_btn != nullptr) {
            delete admin_btn;
            admin_btn = nullptr;  // Set to nullptr after deletion
        }

        if (GestionEmp_btn != nullptr) {
            delete GestionEmp_btn;
            GestionEmp_btn = nullptr;
        }

        if (GestionRes_btn != nullptr) {
            delete GestionRes_btn;
            GestionRes_btn = nullptr;
        }
        if (GestionFourn_btn != nullptr) {
            delete GestionFourn_btn;
            GestionFourn_btn = nullptr;
        }


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

    // Make sure to manage the memory of     dynamically allocated objects

}


void MainWindow::fingerprint_clicked()
{
    cout<<"clicked"<<endl;
    Log_viafinger();

}

void MainWindow::Log_viafinger()
{
    A.close_arduino();

    ret=A.connect_arduino();
    if(ret==0)
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
               query2.bindValue(":last_login",query.value(2).toString());
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
            ui->label_nameprofil->setText(curr_user.get_nom()+" "+curr_user.get_prenom()+"#"+curr_user.get_role());

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
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Arduino is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}






void MainWindow::on_pushButton_setting2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    last_index=1;
}

void MainWindow::on_pushButton_setting1_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    last_index=0;

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(last_index);
}
