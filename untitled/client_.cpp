#include "client_.h"
#include "ui_client_.h"

Client_::Client_(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Client_)
{
    ui->setupUi(this);
}

Client_::~Client_()
{
    delete ui;
}
