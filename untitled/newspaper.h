#pragma once

#include <QString>
#include<iostream>
#include<ctime>
#include<iomanip>
#include "date.h"
//using namespace std;

struct Newspaper//struct newspaper
{
    QString name;
    Data d;
    int number;
    QString genre;
    bool status;
    void Fill_newspaper()
    {
        QString names[10] = { " HINDUSTAN TIMES","THE SUN","NEW YORK TIMES","TIMES OF INDIA","SPIEGEL","WALL STREET JOURNAL","JAPAN TODAY"," PRESSE"," WASHINGTON POST","USA TODAY" };
        name = names[rand() % 10];
        int a = rand() % 10;
        if (a == 0)
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
