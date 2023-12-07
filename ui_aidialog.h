/********************************************************************************
** Form generated from reading UI file 'aidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIDIALOG_H
#define UI_AIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AIDIALOG
{
public:
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QLabel *label;
    QComboBox *comboBox_Language;
    QComboBox *comboBox_Length;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_mode;
    QLabel *label_4;
    QComboBox *comboBox_Style;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_question;
    QGroupBox *groupBox_3;
    QPushButton *pushButton;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *AIDIALOG)
    {
        if (AIDIALOG->objectName().isEmpty())
            AIDIALOG->setObjectName(QStringLiteral("AIDIALOG"));
        AIDIALOG->resize(1000, 650);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/image/Ai.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        AIDIALOG->setWindowIcon(icon);
        groupBox = new QGroupBox(AIDIALOG);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(610, 0, 391, 661));
        groupBox->setStyleSheet(QLatin1String("background-color: rgba(17, 17, 11, 100);\n"
"border:none;"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(90, 50, 211, 51));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(64, 210, 61, 20));
        comboBox_Language = new QComboBox(groupBox);
        comboBox_Language->setObjectName(QStringLiteral("comboBox_Language"));
        comboBox_Language->setGeometry(QRect(195, 210, 141, 22));
        comboBox_Language->setStyleSheet(QLatin1String("background-color: rgb(130, 255, 102);\n"
"color: rgb(0, 0, 0);"));
        comboBox_Length = new QComboBox(groupBox);
        comboBox_Length->setObjectName(QStringLiteral("comboBox_Length"));
        comboBox_Length->setGeometry(QRect(195, 287, 141, 22));
        comboBox_Length->setStyleSheet(QLatin1String("background-color: rgb(130, 255, 102);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(64, 290, 63, 14));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(64, 350, 97, 14));
        comboBox_mode = new QComboBox(groupBox);
        comboBox_mode->setObjectName(QStringLiteral("comboBox_mode"));
        comboBox_mode->setGeometry(QRect(195, 346, 141, 22));
        comboBox_mode->setStyleSheet(QLatin1String("background-color: rgb(130, 255, 102);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(64, 400, 47, 14));
        comboBox_Style = new QComboBox(groupBox);
        comboBox_Style->setObjectName(QStringLiteral("comboBox_Style"));
        comboBox_Style->setGeometry(QRect(195, 400, 141, 22));
        comboBox_Style->setStyleSheet(QLatin1String("background-color: rgb(130, 255, 102);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(AIDIALOG);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 0, 1000, 650));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/image/BackgroundAI.jpg")));
        label_5->setScaledContents(true);
        groupBox_2 = new QGroupBox(AIDIALOG);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 611, 190));
        groupBox_2->setStyleSheet(QLatin1String("background-color: rgba(17, 17, 11, 100);\n"
"border:none;"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 20, 111, 20));
        lineEdit_question = new QLineEdit(groupBox_2);
        lineEdit_question->setObjectName(QStringLiteral("lineEdit_question"));
        lineEdit_question->setGeometry(QRect(20, 70, 571, 101));
        groupBox_3 = new QGroupBox(AIDIALOG);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 190, 611, 461));
        groupBox_3->setStyleSheet(QLatin1String("background-color: rgba(17, 17, 11, 100);\n"
"border:none;"));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 370, 80, 22));
        textEdit_2 = new QTextEdit(groupBox_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 50, 571, 121));
        textEdit_2->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        label_5->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();

        retranslateUi(AIDIALOG);

        QMetaObject::connectSlotsByName(AIDIALOG);
    } // setupUi

    void retranslateUi(QDialog *AIDIALOG)
    {
        AIDIALOG->setWindowTitle(QApplication::translate("AIDIALOG", "Ai", Q_NULLPTR));
        groupBox->setTitle(QString());
        textEdit->setHtml(QApplication::translate("AIDIALOG", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:22pt; font-weight:600; color:#82ff66;\">Settings AI</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("AIDIALOG", "Language :", Q_NULLPTR));
        comboBox_Language->clear();
        comboBox_Language->insertItems(0, QStringList()
         << QApplication::translate("AIDIALOG", "English", Q_NULLPTR)
         << QApplication::translate("AIDIALOG", "Frensh", Q_NULLPTR)
        );
        comboBox_Length->clear();
        comboBox_Length->insertItems(0, QStringList()
         << QApplication::translate("AIDIALOG", "Short", Q_NULLPTR)
         << QApplication::translate("AIDIALOG", "Medium", Q_NULLPTR)
         << QApplication::translate("AIDIALOG", "Long", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("AIDIALOG", "length Text :", Q_NULLPTR));
        label_3->setText(QApplication::translate("AIDIALOG", "Conversation Mode:", Q_NULLPTR));
        comboBox_mode->clear();
        comboBox_mode->insertItems(0, QStringList()
         << QApplication::translate("AIDIALOG", "Casual Chat", Q_NULLPTR)
         << QApplication::translate("AIDIALOG", "More Structured", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("AIDIALOG", "styles:", Q_NULLPTR));
        comboBox_Style->clear();
        comboBox_Style->insertItems(0, QStringList()
         << QApplication::translate("AIDIALOG", "Formal", Q_NULLPTR)
         << QApplication::translate("AIDIALOG", "Informal", Q_NULLPTR)
         << QApplication::translate("AIDIALOG", "Academic", Q_NULLPTR)
        );
        label_5->setText(QString());
        groupBox_2->setTitle(QString());
        label_6->setText(QApplication::translate("AIDIALOG", "Ask Your Question", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButton->setText(QApplication::translate("AIDIALOG", "ASK AI", Q_NULLPTR));
        textEdit_2->setHtml(QApplication::translate("AIDIALOG", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8.25pt;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AIDIALOG: public Ui_AIDIALOG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIDIALOG_H
