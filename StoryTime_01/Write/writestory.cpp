#include "writestory.h"
#include "ui_writestory.h"

WriteStory::WriteStory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WriteStory)
{
    ui->setupUi(this);

    // ## Todo:
    // fetch the oldest incomplete story from queue/cloud

    ui->LabelDisplay->setWordWrap(true); // should use a scroll area


}



WriteStory::~WriteStory()
{
    delete ui;
}


//setWordWrap(true)

void WriteStory::on_BtnFetch_released()
{
    // TODO:

    // get another story from the queue if there is more and the player hasn't re-fetch more than x times

    // QString anotherStory = dequeue somewhere
    //ui->LabelDisplay->setText(anotherStory);
}

void WriteStory::on_BtnWrite_released()
{
    // TODO:
    // Attache the writing-for-options as a child, so the child will not be destoryed until new writing is finished
    //


    this->hide();
    WritingForOptions wo;
    wo.setModal(true);
    wo.exec();
}

void WriteStory::on_BtnBack_released()
{
    // TODO:

    // hopefuly can use touch screen function instead

    // release the whatever data here.

    // this causes that the app can't be existed properly

    this->destroy(true);

}
