#pragma once


#include<ctime>
#include"date.h"
#include <QString>
//using namespace std;

struct magazine//struct magazine
{
    QString name;
    Data d;
    int number;
    QString genre;
    bool status;
    void Fill_magasine()
    {
        QString names[10] = { "Vogue","Elle","Harper`s Bazaar","Marie Claire","Glamour","Numero","Dazed"," InStyle","L’Officiel","Purple Fashion" };
        name = names[rand() % 10];
        int digit= rand() % 10;
        if (digit == 0)
        {
            number = 0;
            status = false;
        }
        else
        {
            number = 1 + rand() % 50;
            status = true;
        }
        QString genres[6] = { "Інформаційний","Спортивний","Науковий","Розважальний","Дитячий","Галузевий" };
        genre = genres[rand() % 6];
        d.Fill_data(1960, 2018);
    }
};



