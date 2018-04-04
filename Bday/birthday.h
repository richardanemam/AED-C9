#ifndef __BDAY__
#define __BDAY__
#include<iostream>
using namespace std;

class Bday{
    private:
        int day, month, year;
    
    public:
        Bday(int, int, int);
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getDay();
        int getMonth();
        int getYear();
        void show();
};
#endif