#include "Sales_data.h"

int main()
{
    Sales_data a;
    
    Sales_data b("12345");

    Sales_data c("12345", 4, 23.1);
    
    Sales_data d(std::cin);

    print(std::cout, d) << std::endl;
}

