#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> text = {"Oak", "OakHill", "OakRidge", "OakleyPark", "OakleyRiver"};
    std::string sought;
    std::cin >> sought;
    
    auto beg = text.begin();
    auto end = text.end();
    
    //+ not defined for iterator
    // end - beg -> difference_type
    auto mid = beg + (end - beg) / 2;
   
    while (mid != end && *mid != sought)
    {
        if (sought < *mid) 
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
        
        mid = beg + (end - beg) / 2;
    }

    if (mid != text.end() && *mid == sought)
    {
        std::cout << "Found " << *mid << std::endl;
    }
    else
    {
        std::cout << "Not found" << std::endl;
    }
}
