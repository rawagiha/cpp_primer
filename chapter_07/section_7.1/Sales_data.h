#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data
{
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
    std::ostream& print(std::ostream&, const Sales_data&);
    std::istream& read(std::istream&, Sales_data&);
};


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

#endif
