#include <iostream>
#include <string>

struct Sales_data
{
    std::string book_no;
    //unsigned units_sold = 0;
    //double revenue = 0.0;
    
    //Aggregate class has no in-class initializer
    unsigned units_sold;
    double revenue;
};

int main()
{
    Sales_data item = {"978-0590353403", 25, 15.99};
}
