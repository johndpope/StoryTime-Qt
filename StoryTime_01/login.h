#ifndef LOGIN_H
#define LOGIN_H


#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_released();

    void on_pushButton_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase loginData; // phone id + password
};

#endif // LOGIN_H
