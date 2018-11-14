#pragma once




#include<ctime>
#include<string>
#include"source.h"
#include "date.h"
#include <QString>

//using namespace std;

struct client
{
    QString name;
    QString surname;
    Data Date_issue;
    Data Date_delivery;
    int numberbook = 0;
    book *books = new book[numberbook];
        Newspaper *newspaper = new Newspaper[numberbook];
            magazine *magazines = new magazine[numberbook];
    bool debtor;

    void Fill_client()
    {
        QString sn[6] = { "Бондаренко", "Мельник", "Шевченко", "Ткаченко", "Коваленко", "Бойко" };
        QString n[6] = { "Олексій", "Олександр", "Максим", "Борис", "Юрій", "Владислав" };
        name = n[rand() % 6];
        surname = sn[rand() % 6];
        Date_issue.Fill_data(2017, 2018);
        Date_delivery.Fill_data(2017, 2018);
    }


};
