#ifndef CRUD_H
#define CRUD_H
#include <QSqlQuery>
#include <QSqlQueryModel>

#include <QDialog>
#include "employe.h"
#include "user.h"
#include <QDate>
#include <QDateTime>
#include <iostream>
#include <QString>
//statistique
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
QT_CHARTS_USE_NAMESPACE

using namespace QtCharts;


using namespace std;

namespace Ui {
class CRUD;
}

class CRUD : public QDialog
{
    Q_OBJECT

public:
    explicit CRUD(QWidget *parent = nullptr);
    ~CRUD();
    void SetLineEdit_value();
    QMainWindow chart_window;
    int tab_widget_index;
    void typeText(const QString& text, int delay);
    void simulateChat(const QString& cleanedText);
    QString readTextFromFile(const QString& filePath);
private slots:


    void on_ajouter_emp_clicked();

    void on_pushButton_supp_clicked();



    void on_pushButton_modifier_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_ask_ai_clicked();

    void on_stat_clicked();

    void on_pushButton_genpdf_clicked();

private:
    Ui::CRUD *ui;
    employe e;
    user u;
};

#endif // CRUD_H
