#pragma once
#include<ctime>
#include"book.h"
#include"magazine.h"
#include"newspaper.h"

#include <QString>

//using namespace std;

int sizebook = 10, sizesource = 3, sizeclient = 10, sizeauthor = 10,size_author=1;//variables for arrays
int size_a=sizeauthor;//variables for arrays

struct  sources_book//struct sources_book
{
    QString sources="Книга";
    book *books = new book[sizebook];
};
struct sources_magazine//struct sources_magazine
{
    QString sources = "Журнал";
    magazine *magazines = new magazine[sizebook];
};
struct sources_newspaper//struct sources_newspaper
{
    QString sources = "Газета";
    Newspaper *newspapers = new Newspaper[sizebook];
};
