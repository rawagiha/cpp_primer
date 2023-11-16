#include <iostream>
#include <vector>

int main()
{
    int i;
    std::vector<int> vec;
    while(std::cin >> i)
    {
        vec.push_back(i);
    }

    for (auto it = vec.cbegin(); it + 1 != vec.cend(); ++it)
    {
        std::cout << *it + *(it + 1) << std::endl;     
    }

    auto end = vec.cend();
    auto mid = vec.cbegin() + (vec.size() + 1) / 2; 
    for (auto it = vec.cbegin(); it != mid; ++it)
    {
        --end;
        std::cout << *it + *end << std::endl;    
    }
}
