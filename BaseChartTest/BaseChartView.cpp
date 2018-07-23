#include "BaseChartView.h"
#include "ui_BaseChartView.h"
#include <QDebug>
BaseChartView::BaseChartView(int flag,QList<QPointF> datarec,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BaseChartView)
{
    ui->setupUi(this);
    m_data = datarec;
    qDebug()<<m_data<<22222;
    initview(flag);
}

BaseChartView::~BaseChartView()
{
    delete ui;
}

void BaseChartView::initview(int flag)
{

    QChart *chart =  new QChart();
    if(flag == 0)
    {
        series = new QLineSeries();
        series->setPen(QPen(Qt::blue,1,Qt::SolidLine)); //设置画笔
        series->setColor(QColor(0,0,255));  //设置颜色
        series->setName(QString::fromLocal8Bit("测试折线图"));

        axisX = new QValueAxis;
        axisX->setRange(0,1000);
        for(int i = 0; i<m_data.size();i++)
        {
            series->append(m_data.at(i).x(),m_data.at(i).y());
        }
        chart->addSeries(series);
    }
    else if(flag == 1)
    {
        scatter = new QScatterSeries();
        scatter->setPen(QPen(Qt::blue,1,Qt::SolidLine)); //设置画笔
        scatter->setColor(QColor(255,0,255));  //设置颜色
        scatter->setName(QString::fromLocal8Bit("测试散点图"));
        for(int i = 0; i<m_data.size();i++)
        {
            scatter->append(m_data.at(i).x(),m_data.at(i).y());
        }
        chart->addSeries(scatter);
    }
    chart->createDefaultAxes(); //设置默认的坐标系，如果不设置程序是运行不了的
    chart->legend()->setAlignment(Qt::AlignRight);

  // 构建 QChartView，并设置抗锯齿、标题、大小
   QChartView *chartView = new QChartView(chart);
   chartView->setRenderHint(QPainter::Antialiasing);
   chartView->setWindowTitle("Simple line chart");
   chartView->resize(300, 400);
   chartView->show();

   ui->BaseChart->addWidget(chartView);
}
