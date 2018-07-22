#ifndef BASECHARTVIEW_H
#define BASECHARTVIEW_H

#include <QWidget>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QScatterSeries>
#include <QValueAxis>

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class BaseChartView;
}

class BaseChartView : public QWidget
{
    Q_OBJECT

public:
    explicit BaseChartView(int flag,QList<QPointF> datarec,QWidget *parent = 0);
    ~BaseChartView();

    void initview(int flag);

private:
    Ui::BaseChartView *ui;

    QValueAxis *axisX;           //x轴
    QValueAxis *axisY;           //y轴

    QLineSeries *series;
    QScatterSeries *scatter;
    QList<QPointF> m_data;
};

#endif // BASECHARTVIEW_H
