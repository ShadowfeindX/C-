#include "days.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Days w; w.show();
    return a.exec();
}
