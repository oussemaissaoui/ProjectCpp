#ifndef STATISTIQUES_H
#define STATISTIQUES_H
#include "piece.h"
#include <QDialog>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <QtCharts/QPieSeries>
#include <QMainWindow>

namespace Ui {
class Statistiques;
}

class Statistiques : public QDialog
{
    Q_OBJECT

public:
    explicit Statistiques(QWidget *parent = nullptr);
    ~Statistiques();

private:
    Ui::Statistiques *ui;
};

#endif // STATISTIQUES_H
