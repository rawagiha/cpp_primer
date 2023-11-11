#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data1, data2;
    double price = 0;

    std::cin >> data1.book_no >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.book_no >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.book_no == data2.book_no)
    {
        unsigned total_cnt = data1.units_sold + data2.units_sold;
        double total_revenue = data1.revenue + data2.revenue;

        std::cout << data1.book_no << " " << total_cnt
                  << " " << total_revenue << " ";
        
        if (total_cnt != 0)
            std::cout << "average price is " << total_revenue / total_cnt << std::endl;
        else
            std::cout << " no sales " << std::endl;

        return 0;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;

        return -1;
    }
}
