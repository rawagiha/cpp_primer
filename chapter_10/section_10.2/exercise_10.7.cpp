#include <vector>
#include <list>
#include <algorithm>
#include <iostream>

template<typename T>
void show(const std::vector<T>& v)
{
    for (const auto& elem : v)
        std::cout << elem << std::endl;
    std::cout << "end of vector content" << std::endl;
}

int main()
{
    std::vector<int> vec;
    std::list<int> lst;
    int i;
    while (std::cin >> i)
    {
        lst.push_back(i);
    }
    
    // without this -> Segmentation fault
    // vec.reserve(lst.size());
    // std::copy(lst.cbegin(), lst.cend(), vec.begin());
    // -> runs without error, but vec remains empty
    
    std::copy(lst.cbegin(), lst.cend(), std::back_inserter(vec));
             
    show(vec);   
    
     
    std::vector<int> _vec;
    //_vec.reserve(10); -> runs w/o erro but remains empty
    _vec.resize(10);
    std::fill_n(_vec.begin(), 10, 6);
    show(_vec);

    //or
    std::vector<int> __vec;
    std::fill_n(std::back_inserter(__vec), 10, 7);
    show(__vec);
}
