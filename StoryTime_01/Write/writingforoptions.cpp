#include "writingforoptions.h"
#include "ui_writingforoptions.h"

WritingForOptions::WritingForOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WritingForOptions)
{
    ui->setupUi(this);
    ui->BtnSetOption1->hide();
    ui->BtnSetOption2->hide();
}

WritingForOptions::~WritingForOptions()
{
    delete ui;
}

void WritingForOptions::on_BtnSetOption_released()
{
    ui->BtnSetOption->setDisabled(true);
    ui->BtnSetOption1->show();
    ui->BtnSetOption2->show();
}


void WritingForOptions::on_BtnSetOption1_released()
{
    // if word count > 500, can not set option

    // set option1 in a window
}

void WritingForOptions::on_BtnSetOption2_released()
{
    // if word count > 500, can not set option

    // set option2 in a window
}

//void WritingForOptions::on_BtnSend_released()
//{
//    // push it back to Queue.
//}

void WritingForOptions::on_EditWriting_textChanged()
{
    QString content = ui->EditWriting->toPlainText();

    QString wordCount = QString::number(content.size());
    ui->LabelCountWords->setText(wordCount);
    if (content.size() > 500){
        // do something to warn.
    }
}
