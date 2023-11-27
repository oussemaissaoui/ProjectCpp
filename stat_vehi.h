#ifndef STAT_VEHI_H
#define STAT_VEHI_H
#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QPieSlice>
#include <QWidget>

namespace Ui {
class stat_vehi;
}

class stat_vehi : public QDialog
{
    Q_OBJECT

public:
    explicit stat_vehi(QWidget *parent = nullptr);
    void make_stat_v();
    ~stat_vehi();

private:
    Ui::stat_vehi *ui;
};

#endif // STAT_VEHI_H
