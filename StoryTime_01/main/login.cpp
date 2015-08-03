#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    loginData = QSqlDatabase::addDatabase("QSQLITE");

    loginData.setDatabaseName("/Users/zthunder/Documents/z-SourceTree/StoryTime/StoryTime_01/dummyData/stunData.sqlite");

    //loginData.setDatabaseName("stunData");
    if (!loginData.open()){
        ui->indicator->setText("Failed");
    }
    else{
        ui->indicator->setText("Connected");
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_BtnSignIn_released()
{
    QString username, password;
    username = ui->EditUsername->text();
    password = ui->EditPassword->text();

    if (!loginData.open()){
        ui->indicator->setText("Failed to open data file.\n");
    }
    else{
        QSqlQuery qry("select * from stunData where username='" + username + "' and password='" + password + "'" );

        if(qry.next()){ // if valid, do something    //str = qry.value("username").toString();

            ui->indicator->setText("Logining in...");
            this->hide();
            Entry en;
            en.setModal(true);
            en.exec();

           // en.exec();
        }
        else{
             ui->indicator->setText("Invalid Username or/and Password");
        }


    }
}

void Login::on_BtnSignUp_released()
{

}