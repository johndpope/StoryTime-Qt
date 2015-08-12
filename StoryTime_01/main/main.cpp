#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // display a logo for couple seconds. or in login UI
    Login w;
    w.show();

    return a.exec();
}
