#include "lineserise.h"
#include <QDebug>
lineserise::lineserise(int flag,QList<QPointF> datarec,BaseChartView *parent):
    BaseChartView(flag,datarec,parent)
{
//    m_lineserise->BaseChartView(datarec);

    //可以传过来，但是怎么传给BaseChartView？？？注意上面的写法，就可以传参了
    qDebug()<<datarec<<11111;
}
