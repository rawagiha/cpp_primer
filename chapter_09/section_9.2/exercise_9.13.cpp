#include <list>
#include <vector>
#include <iterator>
#include <iostream>

int main()
{
    std::list<int> a = {7, 8, 9};
    std::vector<int> b = {1, 3, 4};
    
    std::list<int>::iterator begin = a.begin();
    std::list<int>::iterator end = a.end();
    
    //elem can be converted
    std::vector<double> v(begin, end);
     
    for (const auto& elem : v)
        std::cout << elem << std::endl;   
}
