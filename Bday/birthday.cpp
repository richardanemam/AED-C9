#include <stdio.h>
#include "birthday.h"

Bday::Bday(int day, int month, int year){
    this->setDay(day);
    this->setMonth(month);
    this->setYear(year);
}

void Bday::setDay(int day){
    this->day = day;
}

void Bday::setMonth(int month){
    this->month = month;
}

void Bday::setYear(int year){
    this->year = year;
}


int Bday::getDay(){
    return this->day;
}

int Bday::getMonth(){
    return this->month;
}

int Bday::getYear(){
    return this->year;
}

void Bday::show(){
    cout << getDay() << "/" << getMonth() << "/" << getYear() << "\n";
}
