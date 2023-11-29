#ifndef RH_H
#define RH_H



#include <QMainWindow>
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


namespace Ui {
class rh;
}

class rh : public QMainWindow
{
    Q_OBJECT

public:
    explicit rh(QWidget *parent = nullptr);
    ~rh();
    QMainWindow chart_window;
    bool isAIDialogOpen;


private slots:
    void on_pushButton_CRUD_clicked();

    //void on_pushButton_CRUD_2_clicked();

   // void on_pushButton_CRUD_3_clicked();

   // void on_pushButton_CRUD_4_clicked();

private:
    Ui::rh *ui;

    
protected:
void closeEvent(QCloseEvent *event);
};

#endif // RH_H
