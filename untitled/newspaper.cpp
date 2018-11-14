#include "newspaper.h"
#include "ui_newspaper.h"

NewsPaper::NewsPaper(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewsPaper)
{
    ui->setupUi(this);
}

NewsPaper::~NewsPaper()
{
    delete ui;
}
