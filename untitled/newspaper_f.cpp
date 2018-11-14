


//#include "newspaper.h"
#include "ui_newspaper_f.h"
//#include "librarys.h"
#include <QTextStream>
#include "QStandardItemModel"
#include "QStandardItem"
#include <QTableWidget>
#include<QFile>
//#include"source.h"

#include "newspaper_f.h"
//library news; //об'єкт структури
int o=0;// Перевірка чи заповнена таблиця
NewsPaper_f::NewsPaper_f(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewsPaper_f)
{

}

NewsPaper_f::~NewsPaper_f()
{
    delete ui;
}
