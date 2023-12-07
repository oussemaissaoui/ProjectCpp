/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QTabWidget *Arduino;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_montant_ajouter;
    QLineEdit *lineEdit_id_ajouter;
    QLineEdit *lineEdit_date_ajouter;
    QLineEdit *lineEdit_duree_ajouter;
    QLineEdit *lineEdit_type_ajouter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QPushButton *pushButton_ajouter;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_modifier;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_23;
    QLineEdit *lineEdit_id_modifier;
    QLineEdit *lineEdit_montant_modifier;
    QLineEdit *lineEdit_type_modifier;
    QLineEdit *lineEdit_date_modifier;
    QLineEdit *lineEdit_duree_modifier;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_supprimer;
    QLineEdit *lineEdit_id_supprimer;
    QLabel *label_14;
    QWidget *tab_2;
    QTableView *tableView_facture;
    QPushButton *pushButton_ajouter_2;
    QPushButton *pushButton_PDF;
    QLineEdit *lineEdit;
    QRadioButton *radioButton;
    QPushButton *pushButton_Statistique;
    QPushButton *qr;
    QWidget *tab_5;
    QLabel *label_7;
    QLineEdit *lineEdit_id_arduino;
    QPushButton *verify;
    QTableView *tableView_facture_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1126, 554);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 1091, 531));
        QFont font;
        font.setFamily(QStringLiteral("Poppins"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"  border: none;\n"
"  margin-top: 10px;\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"background-color:white;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"  subcontrol-origin: margin;\n"
"  subcontrol-position: top left;\n"
"  padding: 8px;\n"
"  color: white;\n"
"  font-size: 20px; /* Increased font size */\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"  background-color: #2CBB63;\n"
"  border-bottom: 2px solid #2CBB63; /* Green bottom border */\n"
"  border-top: 2px solid #2CBB63; /* Green top border */\n"
"  border-left: 2px solid #2CBB63; /* Green left border */\n"
"  border-right: 2px solid #2CBB63; /* Green right border */\n"
"  border-bottom-right-radius: 5px; /* Rounded bottom-right corner */\n"
"}"));
        Arduino = new QTabWidget(groupBox);
        Arduino->setObjectName(QStringLiteral("Arduino"));
        Arduino->setGeometry(QRect(30, 40, 1051, 461));
        Arduino->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"  border: 0px solid #2CBB63; /* Green contour */\n"
"  border-radius: 8px;\n"
"  background-color: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"  alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"  background-color: white;\n"
"  color: black; /* Black text color */\n"
"  border: none; /* Remove the border */\n"
"  padding: 14px 25px;\n"
"  font-size: 12px;\n"
"  font-weight: bold;\n"
"  min-width: 120px;\n"
"  qproperty-drawBase: 0;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"  background-color: white; /* Green color */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #2CBB63; /* Green underline */\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"  background-color: white; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 4px solid #2CBB63; /* Green underline */\n"
"}\n"
"\n"
"QTabBar::tab:selected:hover {\n"
"  background-color: white; /* Green color */\n"
"  color: black; /* Black text color */\n"
"}background-color: rgb(2"
                        "39, 255, 241);\n"
"background-color: rgb(255, 249, 243);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 50, 321, 331));
        QFont font1;
        font1.setFamily(QStringLiteral("Poppins"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_2->setFont(font1);
        lineEdit_montant_ajouter = new QLineEdit(groupBox_2);
        lineEdit_montant_ajouter->setObjectName(QStringLiteral("lineEdit_montant_ajouter"));
        lineEdit_montant_ajouter->setGeometry(QRect(180, 100, 111, 22));
        lineEdit_montant_ajouter->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_id_ajouter = new QLineEdit(groupBox_2);
        lineEdit_id_ajouter->setObjectName(QStringLiteral("lineEdit_id_ajouter"));
        lineEdit_id_ajouter->setGeometry(QRect(180, 60, 113, 20));
        lineEdit_id_ajouter->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_date_ajouter = new QLineEdit(groupBox_2);
        lineEdit_date_ajouter->setObjectName(QStringLiteral("lineEdit_date_ajouter"));
        lineEdit_date_ajouter->setGeometry(QRect(180, 170, 113, 22));
        lineEdit_date_ajouter->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_duree_ajouter = new QLineEdit(groupBox_2);
        lineEdit_duree_ajouter->setObjectName(QStringLiteral("lineEdit_duree_ajouter"));
        lineEdit_duree_ajouter->setGeometry(QRect(180, 210, 113, 22));
        lineEdit_duree_ajouter->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_type_ajouter = new QLineEdit(groupBox_2);
        lineEdit_type_ajouter->setObjectName(QStringLiteral("lineEdit_type_ajouter"));
        lineEdit_type_ajouter->setGeometry(QRect(180, 130, 113, 22));
        lineEdit_type_ajouter->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bottom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 131, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Poppins"));
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label->setFrameShape(QFrame::StyledPanel);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 90, 131, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 125, 131, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 160, 131, 31));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(237, 244, 247, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(110, 116, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(147, 155, 160, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush7(QColor(220, 233, 240, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        label_4->setPalette(palette);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(10);
        label_4->setMidLineWidth(12);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setScaledContents(true);
        label_4->setWordWrap(true);
        label_4->setMargin(0);
        label_4->setIndent(6);
        label_4->setOpenExternalLinks(true);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 200, 131, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        label_6->setPalette(palette1);
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(10);
        label_6->setMidLineWidth(12);
        label_6->setTextFormat(Qt::AutoText);
        label_6->setScaledContents(true);
        label_6->setWordWrap(true);
        label_6->setMargin(0);
        label_6->setIndent(6);
        label_6->setOpenExternalLinks(true);
        pushButton_ajouter = new QPushButton(groupBox_2);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(90, 270, 121, 41));
        pushButton_ajouter->setFont(font2);
        pushButton_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(400, 50, 321, 331));
        groupBox_3->setFont(font1);
        pushButton_modifier = new QPushButton(groupBox_3);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(90, 270, 131, 41));
        pushButton_modifier->setFont(font2);
        pushButton_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 59, 111, 31));
        label_12->setFont(font2);
        label_12->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_12->setFrameShape(QFrame::StyledPanel);
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 95, 111, 31));
        label_13->setFont(font2);
        label_13->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_13->setFrameShape(QFrame::StyledPanel);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 130, 111, 31));
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
" \n"
" font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_11->setFrameShape(QFrame::StyledPanel);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 170, 111, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        label_5->setPalette(palette2);
        label_5->setFont(font2);
        label_5->setStyleSheet(QLatin1String("QLabel {\n"
"border : none;\n"
"\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setLineWidth(10);
        label_5->setMidLineWidth(12);
        label_5->setTextFormat(Qt::AutoText);
        label_5->setScaledContents(true);
        label_5->setWordWrap(true);
        label_5->setMargin(0);
        label_5->setIndent(6);
        label_5->setOpenExternalLinks(true);
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 210, 111, 31));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        label_23->setPalette(palette3);
        label_23->setFont(font2);
        label_23->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_23->setFrameShape(QFrame::StyledPanel);
        label_23->setFrameShadow(QFrame::Plain);
        label_23->setLineWidth(10);
        label_23->setMidLineWidth(12);
        label_23->setTextFormat(Qt::AutoText);
        label_23->setScaledContents(true);
        label_23->setWordWrap(true);
        label_23->setMargin(0);
        label_23->setIndent(6);
        label_23->setOpenExternalLinks(true);
        lineEdit_id_modifier = new QLineEdit(groupBox_3);
        lineEdit_id_modifier->setObjectName(QStringLiteral("lineEdit_id_modifier"));
        lineEdit_id_modifier->setGeometry(QRect(150, 70, 141, 22));
        lineEdit_id_modifier->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bot"
                        "tom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_montant_modifier = new QLineEdit(groupBox_3);
        lineEdit_montant_modifier->setObjectName(QStringLiteral("lineEdit_montant_modifier"));
        lineEdit_montant_modifier->setGeometry(QRect(150, 100, 141, 22));
        lineEdit_montant_modifier->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bot"
                        "tom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_type_modifier = new QLineEdit(groupBox_3);
        lineEdit_type_modifier->setObjectName(QStringLiteral("lineEdit_type_modifier"));
        lineEdit_type_modifier->setGeometry(QRect(150, 140, 141, 22));
        lineEdit_type_modifier->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bot"
                        "tom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_date_modifier = new QLineEdit(groupBox_3);
        lineEdit_date_modifier->setObjectName(QStringLiteral("lineEdit_date_modifier"));
        lineEdit_date_modifier->setGeometry(QRect(150, 180, 141, 22));
        lineEdit_date_modifier->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bot"
                        "tom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        lineEdit_duree_modifier = new QLineEdit(groupBox_3);
        lineEdit_duree_modifier->setObjectName(QStringLiteral("lineEdit_duree_modifier"));
        lineEdit_duree_modifier->setGeometry(QRect(150, 220, 141, 22));
        lineEdit_duree_modifier->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bot"
                        "tom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(740, 70, 291, 161));
        groupBox_4->setFont(font1);
        pushButton_supprimer = new QPushButton(groupBox_4);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(150, 110, 131, 41));
        pushButton_supprimer->setFont(font2);
        pushButton_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        lineEdit_id_supprimer = new QLineEdit(groupBox_4);
        lineEdit_id_supprimer->setObjectName(QStringLiteral("lineEdit_id_supprimer"));
        lineEdit_id_supprimer->setGeometry(QRect(130, 60, 141, 22));
        lineEdit_id_supprimer->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLabel {\n"
"  padding: 5px;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}QLineEdit {\n"
"  padding: 0;\n"
"  border: none; /* No border */\n"
"  background-color: transparent; /* Transparent background */\n"
"  color: black; /* Black text color */\n"
"  border-bot"
                        "tom: 2px solid #808080; /* Grey underline */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-bottom: 3px solid #2CBB63; /* Green underline on hover */\n"
"  font-weight: bold; /* Bolder text */\n"
"  padding-bottom: 2px; /* Increase bottom padding */\n"
"}"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 50, 81, 31));
        label_14->setFont(font2);
        label_14->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        label_14->setFrameShape(QFrame::StyledPanel);
        Arduino->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_facture = new QTableView(tab_2);
        tableView_facture->setObjectName(QStringLiteral("tableView_facture"));
        tableView_facture->setGeometry(QRect(30, 70, 1001, 331));
        tableView_facture->setStyleSheet(QLatin1String("QTableView {\n"
"  background-color: #ffffff;\n"
"  color: #000000;\n"
"  gridline-color: #cccccc;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"  background-color: #0066cc;\n"
"  color: #ffffff;\n"
"}\n"
"\n"
"QTableView QHeaderView::section {\n"
"  background-color: #0066cc;\n"
"  color: #ffffff;\n"
"  font-weight: bold;\n"
"  padding: 5px;\n"
"  border: none;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:pressed {\n"
"  background-color: #0044aa;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked {\n"
"  background-color: #0088ff;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked:disabled {\n"
"  background-color: #cccccc;\n"
"  color: #999999;\n"
"}"));
        pushButton_ajouter_2 = new QPushButton(tab_2);
        pushButton_ajouter_2->setObjectName(QStringLiteral("pushButton_ajouter_2"));
        pushButton_ajouter_2->setGeometry(QRect(420, 30, 141, 31));
        pushButton_ajouter_2->setFont(font2);
        pushButton_ajouter_2->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        pushButton_PDF = new QPushButton(tab_2);
        pushButton_PDF->setObjectName(QStringLiteral("pushButton_PDF"));
        pushButton_PDF->setGeometry(QRect(570, 30, 111, 31));
        pushButton_PDF->setFont(font2);
        pushButton_PDF->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(850, 30, 171, 31));
        lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Grey border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Green border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"  outline: none; /* Remove focus outline */\n"
"}"));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(150, 30, 141, 31));
        radioButton->setFont(font2);
        radioButton->setStyleSheet(QLatin1String("QRadioButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QRadioButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QRadioButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QRadioButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        pushButton_Statistique = new QPushButton(tab_2);
        pushButton_Statistique->setObjectName(QStringLiteral("pushButton_Statistique"));
        pushButton_Statistique->setGeometry(QRect(690, 30, 151, 31));
        pushButton_Statistique->setFont(font2);
        pushButton_Statistique->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        qr = new QPushButton(tab_2);
        qr->setObjectName(QStringLiteral("qr"));
        qr->setGeometry(QRect(300, 30, 111, 31));
        qr->setFont(font2);
        qr->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        Arduino->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(550, 10, 121, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"border : none;\n"
"  border-bottom: 2px solid #2CBB63; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-bottom-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        lineEdit_id_arduino = new QLineEdit(tab_5);
        lineEdit_id_arduino->setObjectName(QStringLiteral("lineEdit_id_arduino"));
        lineEdit_id_arduino->setGeometry(QRect(680, 10, 221, 31));
        lineEdit_id_arduino->setStyleSheet(QLatin1String("QLineEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080; /* Grey border */\n"
"  border-radius: 5px; /* Rounded corners */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border-color: #2CBB63; /* Green border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"  border-color: #2CBB63; /* Green border color on focus */\n"
"  outline: none; /* Remove focus outline */\n"
"}"));
        verify = new QPushButton(tab_5);
        verify->setObjectName(QStringLiteral("verify"));
        verify->setGeometry(QRect(920, 10, 111, 31));
        verify->setFont(font2);
        verify->setStyleSheet(QLatin1String("QPushButton {\n"
"  border: none;\n"
"  border-radius: 8px;\n"
"  padding: 10px 20px;\n"
"  background-color: #2CBB63; /* Green color */\n"
"  color: white;\n"
"  font-size: 14px;\n"
"  font-weight: bold;\n"
"  text-transform: uppercase;\n"
"  transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background-color: #7AE59A; /* Lighter green color on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #A2EFB6; /* Lighter green color when pressed */\n"
"  border: 5px solid #2CBB63; /* Green contour */\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 3px rgba(0, 102, 204, 0.4);\n"
"}"));
        tableView_facture_2 = new QTableView(tab_5);
        tableView_facture_2->setObjectName(QStringLiteral("tableView_facture_2"));
        tableView_facture_2->setGeometry(QRect(20, 50, 1011, 351));
        tableView_facture_2->setStyleSheet(QLatin1String("QTableView {\n"
"  background-color: #ffffff;\n"
"  color: #000000;\n"
"  gridline-color: #cccccc;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"  background-color: #0066cc;\n"
"  color: #ffffff;\n"
"}\n"
"\n"
"QTableView QHeaderView::section {\n"
"  background-color: #0066cc;\n"
"  color: #ffffff;\n"
"  font-weight: bold;\n"
"  padding: 5px;\n"
"  border: none;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:pressed {\n"
"  background-color: #0044aa;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked {\n"
"  background-color: #0088ff;\n"
"}\n"
"\n"
"QTableView QHeaderView::section:checked:disabled {\n"
"  background-color: #cccccc;\n"
"  color: #999999;\n"
"}"));
        Arduino->addTab(tab_5, QString());

        retranslateUi(Dialog);

        Arduino->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Dialog", "Gestions des factures", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Dialog", "Ajouter", Q_NULLPTR));
        lineEdit_duree_ajouter->setText(QString());
        label->setText(QApplication::translate("Dialog", "ID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog", "MONTANT:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog", "TYPE:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog", "DATE:", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog", "DUREE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_ajouter->setToolTip(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic;\">ajouter</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_ajouter->setWhatsThis(QApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-weight:600; font-style:italic; text-decoration: underline;\">ajouter</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_ajouter->setText(QApplication::translate("Dialog", "ajouter", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Dialog", "Modifier", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("Dialog", "modifier", Q_NULLPTR));
        label_12->setText(QApplication::translate("Dialog", "ID:", Q_NULLPTR));
        label_13->setText(QApplication::translate("Dialog", "MONTANT:", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog", "TYPE:", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog", "DATE:", Q_NULLPTR));
        label_23->setText(QApplication::translate("Dialog", "DUREE", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Dialog", "Supprimer", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("Dialog", "supprimer", Q_NULLPTR));
        label_14->setText(QApplication::translate("Dialog", "ID:", Q_NULLPTR));
        Arduino->setTabText(Arduino->indexOf(tab), QApplication::translate("Dialog", "Facture", Q_NULLPTR));
        pushButton_ajouter_2->setText(QApplication::translate("Dialog", "afficher", Q_NULLPTR));
        pushButton_PDF->setText(QApplication::translate("Dialog", "PDF", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Dialog", "tri by id", Q_NULLPTR));
        pushButton_Statistique->setText(QApplication::translate("Dialog", "Statistique", Q_NULLPTR));
        qr->setText(QApplication::translate("Dialog", "QR code", Q_NULLPTR));
        Arduino->setTabText(Arduino->indexOf(tab_2), QApplication::translate("Dialog", "Liste des factures", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog", "Id Fcature : ", Q_NULLPTR));
        verify->setText(QApplication::translate("Dialog", "afficher", Q_NULLPTR));
        Arduino->setTabText(Arduino->indexOf(tab_5), QApplication::translate("Dialog", "Arduino", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
