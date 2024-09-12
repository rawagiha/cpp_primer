#ifndef MM_DD_YYYY_H
#define MM_DD_YYYY_H

class Date {
    int month;
    int day;
    int year;
    

public:
    int x;
    
    // def constructor
    Date(int month, int day, int year, int a, int b);
    
    
    void set_date(int new_month, int new_day, int new_year);

    int get_month() {return month;}
    int get_day() {return day;}
    int get_year() {return year;}
    
};

#endif 
