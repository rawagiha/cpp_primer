#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data;
std::istream& read(std::istream& is, Sales_data& item);

struct Sales_data
{
    
    //Sales_data() = default;
    Sales_data(): book_no(""), units_sold(0), revenue(0.0) {}
    /*Sales_data()
    {
        book_no = "";
        units_sold = 0;
        revenue = 0.0;
    };*/
    Sales_data(const std::string& s): book_no(s) {}
    Sales_data(const std::string& s, unsigned n, double p):
                book_no(s), units_sold(n), revenue(p * n) {}
    Sales_data(std::istream& is)
    {
        read(is, *this);
    } 
    
    std::string isbn() const
    {
        return book_no;
    }

    Sales_data& combine(const Sales_data&);

    double avg_price() const;

    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data add(const Sales_data&, const Sales_data&);
};

std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0.0;
    is >> item.book_no >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " 
       << item.revenue << " " << item.avg_price();
    return os;    
}

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0.0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif
