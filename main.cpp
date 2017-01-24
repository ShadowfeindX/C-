#include "mainwindow.hpp"
#include "pool.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w; w.show();
    Pool p;
    //p.drainR = 0;
    //p.fillR = 0;
    //p.volume = 0;
    //p.water = 0;
    p.length = 30;
    p.width = 15;
    p.height = 10;
    p.max = p.length*p.width*p.height*7.48;
    p.show();
    return a.exec();
}
