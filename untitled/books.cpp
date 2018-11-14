#include "books.h"
#include "ui_books.h"
#include "librarys.h"
#include <QTextStream>
#include "QStandardItemModel"
#include "QStandardItem"
#include <QTableWidget>
#include<QFile>
library b;  // object structure
 int c=0;   // Check if the table is full
Books::Books(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Books)

{


if(c==0)// Check if the table is full
{
    for(int i=0;i<10;i++)
    {
    b.author_b[i].Fill_author();
    }
    b.books.books=b.author_b->mybook;
c++;
}
    ui->setupUi(this);
    ui->pushButton_3->setVisible(false);
    ui->spinBox_2->setVisible(false);
    ui->spinBox_3->setVisible(false);
    ui->spinBox_4->setVisible(false);
ui->pushButton_2->setVisible(false);
       ui->tableWidget->setRowCount(size_a); // Specifies the number of rows
       ui->tableWidget->setColumnCount(5); // Specifies the number of columns
     QString namebook,genre,nameAvtor,surnameAvtor;// variables to fill the table
     int number_book,year_book;// variables to fill the table
       ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Назва" <<"Автор"<<"Рік написання"<< "Жанр" << "Кількість"); // Specifies the name of the columns

     for(int i = 0; i < size_a; i++)//filling in the table
             for(int j = 0; j < ui->tableWidget->columnCount(); j++){
                 for(int k=0;k<size_author; k++)
                 {
                namebook=b.author_b[i].mybook[k].name;
                nameAvtor=b.author_b[i].name;
                surnameAvtor=b.author_b[i].surname;
                year_book=b.author_b[i].mybook[k].d.year;
                number_book=b.author_b[i].mybook[k].number;
                genre=b.author_b[i].mybook[k].genre;
                QTableWidgetItem *pCell = ui->tableWidget->item(i, j);
                                pCell = new QTableWidgetItem;
                                ui->tableWidget->setItem(i, j, pCell);
                                if (j==0)
                                pCell->setText(namebook);
                                else if (j==1)
                                {
                                     pCell->setText(nameAvtor +" "+ surnameAvtor);
                                }
                                     else if(j==2)
                                    pCell->setText(QString::number(year_book));
                                     else if(j==3)
                                    pCell->setText(genre);
                                else if(j==4)
                              pCell->setText(QString::number(number_book));

            }

}
     ui->yearBox->clear();
     ui->numberSpinBox->clear();
}
Books::~Books()
{
    delete ui;
}

void Books::on_addBook_clicked()//Add new button
{

    for (int i = 0; i < 1; i++) {
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount()+1);
    }
b.add_author_book();
QString namebook,genre,nameAvtor,surnameAvtor;
int numberbook,yearbook=0;
namebook=ui->nameBook->text();
nameAvtor=ui->nameAuthor->text();
surnameAvtor=ui->SurnammeAuthor->text();
genre=ui->genreBook->text();
numberbook=ui->numberSpinBox->value();
yearbook=ui->yearBox->value();

b.author_b[size_a-1].mybook[size_author-1].name=namebook;
b.author_b[size_a-1].name=nameAvtor;
b.author_b[size_a-1].surname=surnameAvtor;
b.author_b[size_a-1].mybook[size_author-1].d.year=yearbook;
b.author_b[size_a-1].mybook[size_author-1].number=numberbook;
b.author_b[size_a-1].mybook[size_author-1].genre=genre;
for(int j=size_a-1;j<size_a;j++)
for(int i=0;i<5;i++)
{
                 QTableWidgetItem *pCell = ui->tableWidget->item(j, i);
                                pCell = new QTableWidgetItem;
                                 ui->tableWidget->setItem(j, i, pCell);
                                         if (i==0)
                                         pCell->setText(namebook);
                                         else if (i==1)
                                         {
                                              pCell->setText(nameAvtor +" "+ surnameAvtor);
                                         }
                                              else if(i==2)
                                             pCell->setText(ui->yearBox->text());
                                              else if(i==3)
                                             pCell->setText(genre);
                                         else if(i==4)
                                       pCell->setText(ui->numberSpinBox->text());
}
ui->nameBook->setText("");
ui->nameAuthor->setText("");
ui->SurnammeAuthor->setText("");
ui->yearBox->clear();
ui->numberSpinBox->clear();
       ui->genreBook->setText("");
}





void Books::on_DeleteButton_clicked()//Delete book
{
int n;
    QModelIndexList selectedRows = ui->tableWidget->selectionModel()->selectedRows();
    int countRow = selectedRows.count();
n=ui->tableWidget->currentRow();
b.delete_author_book(n);
    for( int i = countRow; i > 0; i--) {
            ui->tableWidget->removeRow(selectedRows[0].row());
            selectedRows = ui->tableWidget->selectionModel()->selectedRows();
        }


}

void Books::on_SearchButton_clicked()//search button book
{
    QString namebook,genrebook,nameAvtor,surnameAvtor;
    int numberbook,yearbook;
       ui->tableWidget->clear();
       ui->tableWidget->setRowCount(size_a);
       ui->tableWidget->setColumnCount(5);
       ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Назва" <<"Автор"<<"Рік написання"<< "Жанр" << "Кількість"); // Задает имя столбцов

       for(int i = 0,l=0; i < size_a; i++)
     {  namebook=ui->nameBook->text();
         nameAvtor=ui->nameAuthor->text();
         surnameAvtor=ui->SurnammeAuthor->text();
         genrebook=ui->genreBook->text();
         numberbook=ui->numberSpinBox->value();
         yearbook=ui->yearBox->value();
            for(int j = 0; j < ui->tableWidget->columnCount(); j++){
                for(int k=0;k<size_author; k++)
                    {
                              QTableWidgetItem *pCell = ui->tableWidget->item(l, j);
                               pCell = new QTableWidgetItem;
                               ui->tableWidget->setItem(l, j, pCell);

                if(namebook==b.author_b[i].mybook[k].name)
                {
                      namebook=b.author_b[i].mybook[k].name;
                      nameAvtor=b.author_b[i].name;
                      surnameAvtor=b.author_b[i].surname;
                      yearbook=b.author_b[i].mybook[k].d.year;
                      numberbook=b.author_b[i].mybook[k].number;
                      genrebook=b.author_b[i].mybook[k].genre;
                     if (j==0)
                     pCell->setText(namebook);
                     else if (j==1)
                     {
                          pCell->setText(nameAvtor +" "+ surnameAvtor);
                     }
                          else if(j==2)
                         pCell->setText(QString::number(yearbook));
                          else if(j==3)
                         pCell->setText(genrebook);
                     else if(j==4)
                     {
                   pCell->setText(QString::number(numberbook));
l++;
                     }
                }
          else if(nameAvtor==b.author_b[i].name)
                {
                    namebook=b.author_b[i].mybook[k].name;
                    nameAvtor=b.author_b[i].name;
                     surnameAvtor=b.author_b[i].surname;
                     yearbook=b.author_b[i].mybook[k].d.year;
                     numberbook=b.author_b[i].mybook[k].number;
                     genrebook=b.author_b[i].mybook[k].genre;
                    if (j==0)
                    pCell->setText(namebook);
                    else if (j==1)
                    {
                         pCell->setText(nameAvtor +" "+ surnameAvtor);
                    }
                         else if(j==2)
                        pCell->setText(QString::number(yearbook));
                         else if(j==3)
                        pCell->setText(genrebook);
                    else if(j==4)
                    {
                  pCell->setText(QString::number(numberbook));
               l++;
                    }
                }
               else if(  surnameAvtor==b.author_b[i].surname)
                {
                    namebook=b.author_b[i].mybook[k].name;
                     nameAvtor=b.author_b[i].name;
                     surnameAvtor=b.author_b[i].surname;
                     yearbook=b.author_b[i].mybook[k].d.year;
                     numberbook=b.author_b[i].mybook[k].number;
                     genrebook=b.author_b[i].mybook[k].genre;
                    if (j==0)
                    pCell->setText(namebook);
                    else if (j==1)
                    {
                         pCell->setText(nameAvtor +" "+ surnameAvtor);
                    }
                         else if(j==2)
                        pCell->setText(QString::number(yearbook));
                         else if(j==3)
                        pCell->setText(genrebook);
                    else if(j==4)
                    {
                  pCell->setText(QString::number(numberbook));
               l++;
                    }
                }
                else if( yearbook==b.author_b[i].mybook[k].d.year)
                {
                    namebook=b.author_b[i].mybook[k].name;
                     nameAvtor=b.author_b[i].name;
                     surnameAvtor=b.author_b[i].surname;
                    yearbook=b.author_b[i].mybook[k].d.year;
                     numberbook=b.author_b[i].mybook[k].number;
                     genrebook=b.author_b[i].mybook[k].genre;
                    if (j==0)
                    pCell->setText(namebook);
                    else if (j==1)
                    {
                         pCell->setText(nameAvtor +" "+ surnameAvtor);
                    }
                         else if(j==2)
                        pCell->setText(QString::number(yearbook));
                         else if(j==3)
                        pCell->setText(genrebook);
                    else if(j==4)
                    {
                  pCell->setText(QString::number(numberbook));
               l++;
                    }
                }
               else if(  numberbook==b.author_b[i].mybook[k].number)
                {
                    namebook=b.author_b[i].mybook[k].name;
                     nameAvtor=b.author_b[i].name;
                     surnameAvtor=b.author_b[i].surname;
                     yearbook=b.author_b[i].mybook[k].d.year;
                    numberbook=b.author_b[i].mybook[k].number;
                     genrebook=b.author_b[i].mybook[k].genre;
                    if (j==0)
                    pCell->setText(namebook);
                    else if (j==1)
                    {
                         pCell->setText(nameAvtor +" "+ surnameAvtor);
                    }
                         else if(j==2)
                        pCell->setText(QString::number(yearbook));
                         else if(j==3)
                        pCell->setText(genrebook);
                    else if(j==4)
                    {
                  pCell->setText(QString::number(numberbook));
               l++;
                    }
                }
               else if(  genrebook==b.author_b[i].mybook[k].genre)
                {
                    namebook=b.author_b[i].mybook[k].name;
                     nameAvtor=b.author_b[i].name;
                     surnameAvtor=b.author_b[i].surname;
                     yearbook=b.author_b[i].mybook[k].d.year;
                     numberbook=b.author_b[i].mybook[k].number;
                     genrebook=b.author_b[i].mybook[k].genre;
                    if (j==0)
                    pCell->setText(namebook);
                    else if (j==1)
                    {
                         pCell->setText(nameAvtor +" "+ surnameAvtor);
                    }
                         else if(j==2)
                        pCell->setText(QString::number(yearbook));
                         else if(j==3)
                        pCell->setText(genrebook);
                    else if(j==4)
                    {
                  pCell->setText(QString::number(numberbook));
                  l++;
                    }
                }
}
}
     }
       //clearing input fields
       ui->nameBook->setText("");
       ui->nameAuthor->setText("");
       ui->SurnammeAuthor->setText("");
       ui->yearBox->clear();
       ui->numberSpinBox->clear();
       ui->genreBook->setText("");
}

void Books::on_pushButton_clicked()//issuing_books
{
    ui->label_6->setText("Ім'я клієнта");
    ui->label_2->setText("Прізвище клієнта");
ui->label_3->setText("Дата");
ui->label_4->setVisible(false);
ui->label_5->setVisible(false);
ui->spinBox_2->setVisible(true);
ui->spinBox_3->setVisible(true);
ui->spinBox_4->setVisible(true);
ui->SurnammeAuthor->setVisible(false);
ui->yearBox->setVisible(false);
ui->numberSpinBox->setVisible(false);
ui->addBook->setVisible(false);
ui->DeleteButton->setVisible(false);
ui->pushButton_2->setVisible(true);
ui->issuing_books->setVisible(false);
ui->SearchButton->setVisible(false);
}
QString namebook, surname,name;
int day,mouth,year;
void Books::on_pushButton_2_clicked()//search for books
{

    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(size_a);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Назва" <<"Автор"<<"Рік написання"<< "Жанр" << "Кількість"); // Задает имя столбцов
    bool a=false;
    namebook=ui->nameBook->text();
    surname=ui->genreBook->text();
     name=ui->nameAuthor->text();
       day=ui->spinBox_2->value();
       mouth=ui->spinBox_3->value();
        year=ui->spinBox_4->value();

    for(int i = 0,l=0; i < size_a; i++)
    {
         for(int j = 0; j < ui->tableWidget->columnCount(); j++){
             for(int k=0;k<size_author; k++)
                 {
                           QTableWidgetItem *pCell = ui->tableWidget->item(l, j);
                            pCell = new QTableWidgetItem;
                            ui->tableWidget->setItem(l, j, pCell);

             if(namebook==b.author_b[i].mybook[k].name)
             {
                 a=true;
                  if (j==0)
                  pCell->setText(namebook);
                  else if (j==1)
                  {
                       pCell->setText(b.author_b[i].name +" "+ b.author_b[i].surname);
                  }
                       else if(j==2)
                      pCell->setText(QString::number(b.author_b[i].mybook[k].d.year));
                       else if(j==3)
                      pCell->setText(b.author_b[i].mybook[k].genre);
                  else if(j==4)
                  {
                pCell->setText(QString::number(b.author_b[i].mybook[k].number));
                b.author_b[i].mybook[k].number--;
                  l++;
                  }
             }
    }}}
    if(a==false)
    {
    ui->pushButton_2->setText("Дана книга відсутня");
    }
    else
    {


ui->pushButton_2->setVisible(false);
ui->pushButton_3->setVisible(true);

    }
}

void Books::on_pushButton_3_clicked()//write to file
{
    QFile f("Books.txt");
    if(f.open(QIODevice::Append))
       {
           QTextStream writeStream(&f);

           writeStream <<"\r\n"+namebook + "  " + name + "  " + surname +"  " + QString::number(day) +"."+ QString::number(mouth) +"."+ QString::number(year);
           f.close();
       }
}
