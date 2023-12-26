#include <iostream>
#include "Book.h"

int main()
{
    Book book("Flowers in Hawaii", 1876, 45.6);

    show_book_info(std::cout, book);
    std::cout << std::endl;
}
