#include "Date.h"

Date::Date(int day, int month, int year){
    this->day = day;
    this->month = month;
    this->year = year;
    this->validate(day, month, year);
}

Date::~Date() {

}

int Date::getDay() const{
    return this->day;
}
int Date::getMonth() const{
    return this->month;
}
int Date::getYear() const{
    return this->year;
}

void Date::validate(int day, int month, int year) {
    if ( this->month <= 0 || this->month > 12 || this-> year < 0 || this-> day <=0 || this->day >= 31) {
        throw InvalidDate("value Invalid  'Month' ");
    }
    if ( this->year % 4 == 0 && this->month == 2 ) {
        std::cout << this->day << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const Date& date){
    out << date.getDay() <<"."
        << date.getMonth() <<"."
        << date.getYear();
    return out;
}