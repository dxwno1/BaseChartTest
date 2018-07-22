#include "chartviewall.h"
#include "ui_chartviewall.h"
#include <QDebug>
chartviewall::chartviewall(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chartviewall)
{
    ui->setupUi(this);
    initview();
}

chartviewall::~chartviewall()
{
    delete ui;
}

void chartviewall::initview()
{
    for(int i = 0; i < 10; i++)
    {
        data.insert(i,i*100);
    }
}

//折线图
void chartviewall::on_lineseriseView_clicked()
{
    QList<QPointF> datasend;
    QMap<int,int>::const_iterator i = data.constBegin();
    while (i!=data.constEnd())
    {
        QPointF temp;
        temp.setX(i.key());
        temp.setY(i.value());
        datasend<<temp;
        ++i;
    }
    qDebug()<<datasend<<"on_lineseriseView_clicked()";
    m_lineserise = new lineserise(0,datasend); //0:折线 1：散点
    m_lineserise->show();
}

//散点图
void chartviewall::on_scatchar_clicked()
{
    QList<QPointF> datasend;
    QMap<int,int>::const_iterator i = data.constBegin();
    while (i!=data.constEnd())
    {
        QPointF temp;
        temp.setX(i.key());
        temp.setY(i.value());
         datasend<<temp;
        ++i;
    }

    qDebug()<<datasend;

    m_scatterserise = new ScatterSerise(1,datasend); //0:折线 1：散点
    m_scatterserise->show();
}
