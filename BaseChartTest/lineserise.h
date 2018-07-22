#ifndef LINESERISE_H
#define LINESERISE_H

#include "BaseChartView.h"

class lineserise : public BaseChartView
{
public:
    lineserise(int flag,QList<QPointF> datarec,BaseChartView *parent = 0);

};

#endif // LINESERISE_H
