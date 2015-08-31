#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    // display a logo for couple seconds. or in login UI
    Login login;

    //QObject::connect(&login, SIGNAL(newTextEntered(const QString&)),
      //                   &signUpForm, SLOT(onNewTextEntered(const QString&)));

    login.show();

    return a.exec();
}
