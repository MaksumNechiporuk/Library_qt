#pragma once




#include<ctime>
#include<string>
#include <QString>
#include"source.h"
//using namespace std;

struct author_book//scruct author book
{
    QString name;
    QString surname;
    int size=size_author;
    book *mybook = new book[size];
    void Fill_author()//fill author
    {
        QString names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
        QString surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
        name = names[rand() % 10];
        surname = surnames[rand() % 10];
        for (int i = 0; i < size; i++)
        {
            mybook[i].Fill_book();
        }
    }
void add_book()//add book
{

           int new_size=size+1;
           book *mybook_new = new book[new_size];
        for(int i=0;i<size;i++)
        {
           mybook_new[i].name= mybook[i].name;
             mybook_new[i].genre= mybook[i].genre;
           mybook_new[i].d= mybook[i].d;
            mybook_new[i].number= mybook[i].number;
            mybook_new[i].status= mybook[i].status;
        }
        delete []mybook;
        mybook=mybook_new;
        size=new_size;
}
void delete_book(int n)//delete book
{

           int new_size=size-1;
           book *mybook_new = new book[new_size];
        for(int i=0,k=0;i<size-1;k++,i++)
        {
            if (n==i)
            {
            n=-1;
            i--;
                continue;
           }
                mybook_new[i].name= mybook[k].name;
             mybook_new[i].genre= mybook[k].genre;
           mybook_new[i].d= mybook[k].d;
            mybook_new[i].number= mybook[k].number;
            mybook_new[i].status= mybook[k].status;
        }
        delete []mybook;
        mybook=mybook_new;
        size=new_size;
}
};
struct author_magazine
{
    QString name;
    QString surname;
    int size=size_author;
    magazine *my_magazine= new magazine[size];

    void Fill_author_magazine()
    {
        QString names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
        QString surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
        name = names[rand() % 10];
        surname = surnames[rand() % 10];
        for (int i = 0; i < size; i++)
        {
            my_magazine[i].Fill_magasine();
        }

    }
    void add_book()
    {

               int new_size=size+1;
               magazine *mynagazine_new = new magazine[new_size];
            for(int i=0;i<size;i++)
            {
               mynagazine_new[i].name= my_magazine[i].name;
                 mynagazine_new[i].genre= my_magazine[i].genre;
               mynagazine_new[i].d= my_magazine[i].d;
                mynagazine_new[i].number= my_magazine[i].number;
                mynagazine_new[i].status= my_magazine[i].status;
            }
            delete []my_magazine;
            my_magazine=mynagazine_new;
            size=new_size;
    }
    void delete_book(int n)
    {

               int new_size=size-1;
        magazine *mynagazine_new = new magazine[new_size];
            for(int i=0,k=0;i<size-1;k++,i++)
            {
                if (n==i)
                {
                n=-1;
                i--;
                    continue;
               }
                    mynagazine_new[i].name= my_magazine[k].name;
                 mynagazine_new[i].genre= my_magazine[k].genre;
               mynagazine_new[i].d= my_magazine[k].d;
                mynagazine_new[i].number= my_magazine[k].number;
                mynagazine_new[i].status= my_magazine[k].status;
            }
            delete []my_magazine;
            my_magazine=mynagazine_new;
            size=new_size;
    }

};

struct author_Newspaper
{
    QString name;
    QString surname;
    int size_newspaper = 1;
        int size=size_author;
    Newspaper *my_newspaper = new Newspaper[size_newspaper];
    void Fill_author_magazine()
    {
        QString names[10] = { "Ерих","Джеймс","Франц","Вільям","Оскар","Ґабріель","Микола","Ярослав","Хорхе","Джордж" };
        QString surnames[10] = { "Орвелл","Луїс","Гашек","Гоголь","Ґарсія","Вайлд","Шекспір","Кафка","Джойс","Марія" };
        name = names[rand() % 10];
        surname = surnames[rand() % 10];
        for (int i = 0; i < size_newspaper; i++)
        {
            my_newspaper[i].Fill_newspaper();
        }

    }
    void add_book()
    {

               int new_size=size+1;
           Newspaper *my_newspaper_new = new Newspaper[new_size];
            for(int i=0;i<size;i++)
            {
               my_newspaper_new[i].name= my_newspaper[i].name;
                 my_newspaper_new[i].genre= my_newspaper[i].genre;
               my_newspaper_new[i].d= my_newspaper[i].d;
                my_newspaper_new[i].number= my_newspaper[i].number;
                my_newspaper_new[i].status= my_newspaper[i].status;
            }
            delete []my_newspaper;
            my_newspaper=my_newspaper_new;
            size=new_size;
    }
    void delete_book(int n)
    {

               int new_size=size-1;
               Newspaper *my_newspaper_new = new Newspaper[new_size];
            for(int i=0,k=0;i<size-1;k++,i++)
            {
                if (n==i)
                {
                n=-1;
                i--;
                    continue;
               }
                    my_newspaper_new[i].name= my_newspaper[k].name;
                 my_newspaper_new[i].genre= my_newspaper[k].genre;
               my_newspaper_new[i].d= my_newspaper[k].d;
                my_newspaper_new[i].number= my_newspaper[k].number;
                my_newspaper_new[i].status= my_newspaper[k].status;
            }
            delete []my_newspaper;
            my_newspaper=my_newspaper_new;
            size=new_size;
    }
};
