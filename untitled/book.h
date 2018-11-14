#pragma once


#include<ctime>
#include<string>
#include <QString>
#include "date.h"

//using namespace std;

struct book//struct book
{
    QString name;
    Data d;
    int number;
    QString genre;
    bool status;

    void Fill_book()//fill book
    {
        QString names[10] = { "На Західному фронті без змін","Улісс","Оповідання, романи, листи, щоденники","Гамлет","Портрет Доріана Грея","Кохання під час холери","Українські повісті"," Пригоди бравого вояка Швейка","Вигадані історії","1984" };
        name = names[rand() % 10];
        int a = rand() % 10;
        if (a == 0)
        {
            number = 0;
            status = false;
        }
        else
        {

            number = 1 + rand() % 100;
            status = true;
        }
        QString genres[6] = { "Детективний","Духовний","Історичний","Пригодницький","Науково-фантастичний","Роман" };
        genre = genres[rand() % 6];
    d.Fill_data(1200,2018);
    }
};
