#ifndef READSTORY_H
#define READSTORY_H

#include <QDialog>

namespace Ui {
class ReadStory;
}

class ReadStory : public QDialog
{
    Q_OBJECT

public:
    explicit ReadStory(QWidget *parent = 0);
    ~ReadStory();

private slots:
    void on_BtnSelectOpt1_released();

    void on_BtnSelectOpt2_released();

    void on_scrollArea_windowIconTextChanged(const QString &iconText);

private:
    Ui::ReadStory *ui;
};

#endif // READSTORY_H
