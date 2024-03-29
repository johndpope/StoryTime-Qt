#ifndef WRITINGFOROPTIONS_H
#define WRITINGFOROPTIONS_H

#include <QDialog>

namespace Ui {
class WritingForOptions;
}

class WritingForOptions : public QDialog
{
    Q_OBJECT

public:
    explicit WritingForOptions(QWidget *parent = 0);
    ~WritingForOptions();

private slots:
    void on_BtnSetOption_released();



    void on_BtnSetOption1_released();

    void on_BtnSetOption2_released();



    void on_EditWriting_textChanged();

    void on_BtnSend_released();

private:
    Ui::WritingForOptions *ui;
};

#endif // WRITINGFOROPTIONS_H
