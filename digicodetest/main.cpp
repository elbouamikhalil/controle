#include "digicodetest.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    digicodetest w;
    w.show();
    return a.exec();
}
