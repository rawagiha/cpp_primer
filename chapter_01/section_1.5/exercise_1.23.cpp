#include <string>
#include <iostream>
#include <unordered_map>
#include "Sales_item.h"

int main()
{
    std::unordered_map<std::string, int> cnt_by_isbn;
    
    Sales_item book;
    while(std::cin >> book)
    {
        if (cnt_by_isbn.find(book.isbn()) == cnt_by_isbn.end())
        {
            cnt_by_isbn[book.isbn()] = 1;
        }
        else
        {
            cnt_by_isbn[book.isbn()] += 1;
        }
    }
    
    for (const auto& _entry : cnt_by_isbn)
    {
        std::cout << _entry.first << " " << _entry.second << std::endl;
    }
}
