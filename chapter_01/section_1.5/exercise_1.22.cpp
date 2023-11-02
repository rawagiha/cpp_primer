#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item curr_book, book;
    
    if (std::cin >> curr_book)
    {
        while (std::cin >> book)
        {
            if (curr_book.isbn() == book.isbn()) 
            {
                curr_book += book;
            }
            else
            {
                std::cout << curr_book << std::endl;
                curr_book = book;
            }
        }
        
        std::cout << curr_book << std::endl;
    }
    
    return 0;
}
