/********************************************************************************
** Form generated from reading UI file 'finger.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINGER_H
#define UI_FINGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Finger
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTextEdit *textEdit;
    QLabel *label_Gif;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_Gif_2;
    QWidget *page_2;
    QLabel *label_Gif_page2;
    QTextEdit *textEdit_page2;
    QPushButton *pushButton_Hold;
    QLabel *label;

    void setupUi(QDialog *Finger)
    {
        if (Finger->objectName().isEmpty())
            Finger->setObjectName(QStringLiteral("Finger"));
        Finger->resize(600, 500);
        Finger->setMinimumSize(QSize(600, 500));
        Finger->setMaximumSize(QSize(600, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/image/fingerprint.png"), QSize(), QIcon::Normal, QIcon::Off);
        Finger->setWindowIcon(icon);
        Finger->setWindowOpacity(100);
        Finger->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Finger);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Finger);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        textEdit = new QTextEdit(page);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 50, 391, 41));
        textEdit->setStyleSheet(QLatin1String("border:none;\n"
"background-color: rgba(255, 255, 255, 0);"));
        textEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        label_Gif = new QLabel(page);
        label_Gif->setObjectName(QStringLiteral("label_Gif"));
        label_Gif->setGeometry(QRect(0, 0, 600, 500));
        label_Gif->setStyleSheet(QStringLiteral(""));
        label_Gif->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 420, 80, 22));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(130, 255, 102);\n"
"color: rgb(0, 0, 0);\n"
"font: 87 10pt \"Arial Black\";"));
        pushButton->setCheckable(false);
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 420, 80, 22));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(212, 45, 45);\n"
"color: rgb(0, 0, 0);\n"
"font: 87 10pt \"Arial Black\";"));
        label_Gif_2 = new QLabel(page);
        label_Gif_2->setObjectName(QStringLiteral("label_Gif_2"));
        label_Gif_2->setGeometry(QRect(600, 0, 600, 500));
        label_Gif_2->setStyleSheet(QStringLiteral(""));
        label_Gif_2->setTextInteractionFlags(Qt::NoTextInteraction);
        stackedWidget->addWidget(page);
        textEdit->raise();
        label_Gif->raise();
        pushButton_2->raise();
        pushButton->raise();
        label_Gif_2->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_Gif_page2 = new QLabel(page_2);
        label_Gif_page2->setObjectName(QStringLiteral("label_Gif_page2"));
        label_Gif_page2->setGeometry(QRect(0, 0, 600, 500));
        textEdit_page2 = new QTextEdit(page_2);
        textEdit_page2->setObjectName(QStringLiteral("textEdit_page2"));
        textEdit_page2->setGeometry(QRect(70, 110, 451, 41));
        textEdit_page2->setStyleSheet(QLatin1String("QTextEdit {\n"
"  padding: 5px;\n"
"  border: 2px solid #808080;\n"
"  border-radius: 5px;\n"
"  background-color: white;\n"
"  color: black;\n"
"}\n"
"\n"
"QTextEdit:hover {\n"
"  border-color: #2CBB63;\n"
"}\n"
"\n"
"QTextEdit:focus {\n"
"  border-color: #2CBB63;\n"
"  outline: none;\n"
"}\n"
""));
        textEdit_page2->setTextInteractionFlags(Qt::NoTextInteraction);
        pushButton_Hold = new QPushButton(page_2);
        pushButton_Hold->setObjectName(QStringLiteral("pushButton_Hold"));
        pushButton_Hold->setGeometry(QRect(140, 430, 341, 51));
        pushButton_Hold->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_Hold->setCheckable(false);
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 50, 361, 51));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  padding: 5px;\n"
"  border: 2px solid grey; /* Grey underline */\n"
"  background-color: white; /* White background */\n"
"  color: black; /* Black text color */\n"
"  font-weight: bold; /* Bolder text */\n"
"  font-size:14px;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"  border-color: #2CBB63; /* Green underline color on hover */\n"
"  color: black; /* Dark green text color on hover */\n"
"}"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Finger);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Finger);
    } // setupUi

    void retranslateUi(QDialog *Finger)
    {
        Finger->setWindowTitle(QApplication::translate("Finger", "FingerPrint", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Finger", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#82ff66;\">Are You Ready To Add Your Fingerprint ?</span></p></body></html>", Q_NULLPTR));
        label_Gif->setText(QString());
        pushButton->setText(QApplication::translate("Finger", "Yes", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Finger", "No", Q_NULLPTR));
        label_Gif_2->setText(QString());
        label_Gif_page2->setText(QString());
        textEdit_page2->setHtml(QApplication::translate("Finger", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#82ff66;\">Hold Your Finger On Sensor Until Process Finish </span></p></body></html>", Q_NULLPTR));
        pushButton_Hold->setText(QApplication::translate("Finger", "Press Me If Your Finger On Sensor", Q_NULLPTR));
        label->setText(QApplication::translate("Finger", "Hold Your Finger On Sensor Until Process Finish ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Finger: public Ui_Finger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINGER_H
