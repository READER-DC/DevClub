#include "Date.h"

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
    this->validate(day, month, year);
}

Date::~Date()
{

}

int Date::getDay() const
{
    return this->day;
}
int Date::getMonth() const
{
    return this->month;
}
int Date::getYear() const
{
    return this->year;
}

void Date::validate(int day, int month, int year) 
{
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};


    if ( this->month <= 0 || this->month > 12 ) 
    {
        throw InvalidDate("value Invalid  'Month' ");
    }
    if ( this->year % 4 == 0 && ( this->year % 100 != 0 || this->year % 400 == 0))
    {
        daysInMonth[1] += 1;
    } 
    else 
    {
        daysInMonth[1] = 28;
    }

    if ( day > daysInMonth[month-1] || day <= 0) 
    {
        throw InvalidDate("value Invalid  'Day' ");
    }

    if ( this->year <= 0 ) 
    {
        throw InvalidDate("value Invalid  'Year' ");
    }


}

std::ostream& operator<<(std::ostream& out, const Date& date){
    out << date.getDay() <<"."
        << date.getMonth() <<"."
        << date.getYear();
    return out;
}