#ifndef WRITESTORY_H
#define WRITESTORY_H

#include <QDialog>
#include "Write/writingforoptions.h"

namespace Ui {
class WriteStory;
}

class WriteStory : public QDialog
{
    Q_OBJECT

public:
    explicit WriteStory(QWidget *parent = 0);

    ~WriteStory();

    void setDiaParent(QDialog *parent){
        diaParent = parent;
    }


private slots:


    void on_BtnFetch_released();

    void on_BtnWrite_released();

    void on_BtnBack_released();

private:
    Ui::WriteStory *ui;
    QDialog *diaParent;
};

#endif // WRITESTORY_H
