#ifndef CHARTVIEWALL_H
#define CHARTVIEWALL_H

#include <QWidget>
#include "lineserise.h"
#include "ScatterSerise.h"

namespace Ui {
class chartviewall;
}

class chartviewall : public QWidget
{
    Q_OBJECT

public:
    explicit chartviewall(QWidget *parent = 0);
    ~chartviewall();

    lineserise *m_lineserise;
    ScatterSerise *m_scatterserise;
    void initview();
private slots:
    void on_lineseriseView_clicked();

    void on_scatchar_clicked();

private:
    Ui::chartviewall *ui;

    QMap<int,int> data;   //测试数据

};

#endif // CHARTVIEWALL_H
