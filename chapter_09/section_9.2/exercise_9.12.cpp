#include <deque>
#include <vector>
#include <iterator>
#include <iostream>

int main()
{
    std::vector<int> a = {1, 3, 4};
    
    // container & elem type match
    std::vector<int> b(a);


    std::deque<int> d = {0, 9, 8, 7, 6, 5, 4};
    std::deque<int>::iterator begin = d.begin();
    std::deque<int>::iterator end = begin + 3;
    
    //elem can be converted
    std::vector<long> v3(begin, end);
    
    for (const auto& elem : v3)
        std::cout << elem << std::endl;   
}
