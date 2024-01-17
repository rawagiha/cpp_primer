#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Sales_data.h"


bool compare_isbn(const Sales_data& s1, const Sales_data& s2)
{
    return s1.isbn() < s2.isbn();
}

int main()
{
    std::vector<Sales_data> data;
    data.emplace_back("ythst-9187", 3, 4.5);
    data.emplace_back("aythst-9187", 2, 0.5);
    data.emplace_back("abd-124", 3, 5.5);
    data.emplace_back("abd-078", 3, 7.5);
    data.emplace_back("ayr-187", 45, 0.5);
    
    std::sort(data.begin(), data.end(), compare_isbn);
    for (const auto& elem : data)
        std::cout << elem.isbn() << ", ";
    std::cout << std::endl; 
}
