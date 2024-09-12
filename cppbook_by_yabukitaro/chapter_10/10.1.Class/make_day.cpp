#include "mm_dd_yyyy.h"
#include <iostream>

int main() {
    Date today(4, 14, 2021, 9, 8);

    std::cout << "April Forteenth in Two Thousand Twenty One: " 
              << today.get_month() << "-"
              << today.get_day() << "-"
              << today.get_year() << std::endl;
   
    std::cout << today.x << std::endl;


    today.set_date(7, 5, 2022);
    std::cout << "July Fifth in Two Thousand Twenty Two: "
              << today.get_month() << "-"
              << today.get_day() << "-"
              << today.get_year() << std::endl;
} 
