#include "sodokun.h"
#include <QApplication>

sodokun *pt_w;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sodokun w;
    pt_w = &w;
    w.show();

    return a.exec();
}


