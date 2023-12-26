#include "Sales_data_ex41.h"

int main()
{
    Sales_data three("isbn-123-45", 4, 9.8);
    std::cout << std::endl;
    Sales_data deflt;
    std::cout << std::endl;
    Sales_data str("9-999-99999-9");
    std::cout << std::endl;
    Sales_data istrm(std::cin);    
}
