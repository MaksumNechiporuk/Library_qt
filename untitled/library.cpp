#include "library.h"
#include "ui_library.h"
#include<string>
#include"books.h"

using namespace std;
Library::Library(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Library)
{
    ui->setupUi(this);
    QPixmap myPixmap( "fon.jpg" );

  ui->fon->setPixmap( myPixmap );
    }
Library::~Library()
{
    delete ui;
}

void Library::on_BookButton_clicked()
{
    Books show_b;
    show_b.setModal(true);
    show_b.exec();

}


