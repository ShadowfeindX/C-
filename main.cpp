#include "gameboard.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameBoard g; g.show();
    return a.exec();
}
