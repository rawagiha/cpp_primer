#include <deque>
#include <vector>
#include <iterator>
#include <iostream>

int main()
{
    std::vector<int> v1;

    std::vector<int> a = {1, 2, 3, 4};
    std::vector<int> b{6, 5, 4};

    std::vector<int> v2(a);

    std::vector<int> c = b;

    std::deque<int> d = {0, 9, 8, 7, 6, 5, 4};
    std::deque<int>::iterator begin = d.begin();
    std::deque<int>::iterator end = begin + 3;
    
    std::vector<int> v3(begin, end);
    
    for (const auto& elem : v3)
        std::cout << elem << std::endl;   
}
