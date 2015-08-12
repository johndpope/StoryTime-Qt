#include "readstory.h"
#include "ui_readstory.h"

ReadStory::ReadStory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadStory)
{
    ui->setupUi(this);
}

ReadStory::~ReadStory()
{
    delete ui;
}

void ReadStory::on_BtnSelectOpt1_released()
{
    // This button is placeholder, options need to be generated to scroll area in run time
    // option1 is selected, display corresponding message is
}

void ReadStory::on_BtnSelectOpt2_released()
{
     // This button is placeholder, options need to be generated to scroll area in run time
    // option2 is selected, display corresponding message
}

void ReadStory::on_scrollArea_windowIconTextChanged(const QString &iconText)
{
    // pushing buttons and texts to the scrolling area,
    // This function is placeholder as well, need to study how scroll area works.
}
