#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConnectDB)
{

    ui->setupUi(this);
}

Dialog::~Dialog()
{

    delete ui;
}
