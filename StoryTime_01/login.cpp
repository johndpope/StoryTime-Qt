#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    loginData = QSqlDatabase::addDatabase("QSQLITE");

    loginData.setDatabaseName("/Users/zthunder/Documents/z-SourceTree/StoryTime/StoryTime_01/dummyData/stunData.sqlite");

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

void Login::on_pushButton_released()
{
    QString username, password;
    username = ui->EditUsername->text();
    password = ui->EditPassword->text();

    if (!loginData.open()){
        ui->indicator->setText("Failed to open data file.\n");
    }
    else{
        QSqlQuery qry("select * from stunData where username='"+username+"' and password='"+password+"'" );
        QString str = "---";

        while(qry.next()){ // if valid, do something
            //str = qry.value("username").toString();
        }
        ui->indicator->setText(str);

    }
}

void Login::on_pushButton_clicked()
{
    on_pushButton_released();
}
