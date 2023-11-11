#ifndef SALES_DATA_H
#define SALES_DATA_H 

#include <string>
#include <iostream>

struct Sales_data
{
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif
