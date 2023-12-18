#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data
{
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::istream& read(std::istream&, Sales_data&);
friend std::ostream& print(std::ostream&, const Sales_data&);

public:
    Sales_data() = default;
    Sales_data(const std::string& s): book_no(s) {}
    Sales_data(const std::string& s, unsigned n, double p):
                book_no(s), units_sold(n), revenue(p * n) {}
    Sales_data(std::istream& is);
    
    std::string isbn() const { return book_no; }
    Sales_data& combine(const Sales_data&);

private:
    double avg_price() const
        { return units_sold ? revenue / units_sold : 0.0; }
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;

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

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_data::Sales_data(std::istream& is) { read(is, *this); }

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif
