#include "mm_dd_yyyy.h"

Date::Date(int month, int day, int year, int a, int b) : month(month), day(day), year(year){
    x = a + b;
}


void Date::set_date(int new_month, int new_day, int new_year) {
    month = new_month;
    day = new_day;
    year = new_year;
}

