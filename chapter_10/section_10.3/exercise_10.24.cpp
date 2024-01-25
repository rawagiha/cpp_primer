#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

bool check_size(int i, const std::string& s)
{
    return (i < 0) ? false : i > s.size();
} 

int main()
{
    std::vector<int> v{-9, 3, -4, 2, 7, -2};
    
    auto wc = std::find_if(v.cbegin(), v.cend(),
                           std::bind(check_size, std::placeholders::_1, "pen"));
    
    if (wc != v.end())
        std::cout << *wc << std::endl;
    else
        std::cout << "Not found" << std::endl;
}
