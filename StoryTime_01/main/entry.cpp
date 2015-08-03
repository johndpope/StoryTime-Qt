#include "entry.h"
#include "ui_entry.h"

Entry::Entry(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entry)
{
    ui->setupUi(this);
   // this->write.setParent(this);
}

Entry::~Entry()
{
    delete ui;
}

void Entry::on_BtnWrite_released()
{
    //this->hide();

    WriteStory w;

    w.setModal(true);
    w.exec(); // need to pass data to this UI
}

void Entry::on_BtnRead_released()
{
    // TODO:
    // A read story window
}
