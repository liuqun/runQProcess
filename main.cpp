#include <QApplication>
#include "tesqprocess.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tesQProcess w;
    w.show();
    return a.exec();
}
