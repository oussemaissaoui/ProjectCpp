#include "statistiques.h"
#include "ui_statistiques.h"
#include "piece.h"
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSlice>
#include <QtCharts/QPieSeries>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
Statistiques::Statistiques(QWidget *parent) :
    QDialog(parent),
       ui(new Ui::Statistiques)
   {
       {
        ui->setupUi(this);
       this->setWindowTitle("STATISTIQUES");
              QPieSeries *series = new QPieSeries();

             Piece P;
             int  total_pieces= P.total_pneus()+P.total_feux()+P.total_batteries()+P.total_climatiseurs();

             series->append("total_pneus",P.total_pneus());
             series->append("total_feux",P.total_feux());
             series->append("total_batteries",P.total_batteries());
             series->append("total_climatiseurs",P.total_climatiseurs());
              series->setHoleSize(0.2);
              QPieSlice *slice = series->slices().at(0);
              slice->setLabelVisible();

              QPieSlice *slice1 = series->slices().at(1);
              slice1->setExploded();
              slice1->setLabelVisible();

              QPieSlice *slice2 = series->slices().at(2);
              slice2->setLabelVisible();

              QChart *chart = new QChart();
              chart->addSeries(series);
              chart->setTitle("  specialité de presataire  :");
              chart->legend()->hide();
              chart->setAnimationOptions(QChart::SeriesAnimations);

              QChartView *chartview = new QChartView(chart);
              chartview->setRenderHint(QPainter::Antialiasing);
              //chartview->setParent(ui->horizontalFrame);
          }
      }


Statistiques::~Statistiques()
{
    delete ui;
}
