#ifndef SCATTERSERISE_H
#define SCATTERSERISE_H

#include "BaseChartView.h"
class ScatterSerise : public BaseChartView
{
public:
    ScatterSerise(int flag, QList<QPointF> datarec,BaseChartView *parent = 0);
};

#endif // SCATTERSERISE_H
