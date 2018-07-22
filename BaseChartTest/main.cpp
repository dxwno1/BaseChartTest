#include "chartviewall.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    chartviewall w;
    w.show();

    return a.exec();
}
