#pragma once





#include<ctime>
#include<string>

struct Data
{
    int day;
    int mouth;
    int year;
    void Fill_data(int min, int max)
    {
        day = 1 + rand() % 30;
        mouth = 1 + rand() % 11;
        year = min + rand() % (max - min);
    }
};
