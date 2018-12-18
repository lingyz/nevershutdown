#include "nevershutdown.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NeverShutdown w;
    w.show();

    return a.exec();
}
