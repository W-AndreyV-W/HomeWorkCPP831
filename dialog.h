#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class ConnectDB;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::ConnectDB *ui;
};

#endif // DIALOG_H
