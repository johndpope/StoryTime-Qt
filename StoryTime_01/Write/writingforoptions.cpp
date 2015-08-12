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
    // TODO:
    // if word count > 500, can not set option

    // set option1 in a window
}

void WritingForOptions::on_BtnSetOption2_released()
{
    // TODO:
    // if word count > 500, can not set option

    // set option2 in a window
}

void WritingForOptions::on_EditWriting_textChanged()
{
    QString content = ui->EditWriting->toPlainText();

    QString wordCount = QString::number(content.size());
    ui->LabelCountWords->setText(wordCount);

    // TODO:
    if (content.size() > 500){
        // do something to warn.
    }
}

void WritingForOptions::on_BtnSend_released()
{
    // TODO:
    // append the content/options to the story,
    // push it back to Queue.
}
