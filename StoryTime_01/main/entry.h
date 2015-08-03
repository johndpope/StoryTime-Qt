#ifndef ENTRY_H
#define ENTRY_H

#include <QDialog>
#include "Write/writestory.h"

namespace Ui {
class Entry;
}

class Entry : public QDialog
{
    Q_OBJECT

public:
    explicit Entry(QWidget *parent = 0);
    ~Entry();

private slots:
    void on_BtnWrite_released();

    void on_BtnRead_released();

private:
    Ui::Entry *ui;
    WriteStory *write;
};

#endif // ENTRY_H
