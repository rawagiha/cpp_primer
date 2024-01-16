#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

template <typename T>
void show(const std::vector<T>& v)
{
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        std::cout << *it << std::endl;
}

int main()
{
    std::vector<std::string> v; //empty
    //std::fill_n(v.begin(), 4, "abc");
    //-> Segmentation fault
    //-> v is not as large as 4
    
    std::vector<std::string> v1; //empty
    std::fill_n(v1.begin(), v1.size(), "abc");
    
    show(v1);
    std::cout << std::endl;
    
    std::vector<std::string> v2{"this", "is", "a", "pen", "."};
    std::fill_n(v2.begin(), v2.size(), "abc");
     
    show(v2);
    std::cout << std::endl;
    
    std::vector<int> ex10_6;
    std::fill_n(std::back_inserter(ex10_6), 10, 0);
      
    show(ex10_6);
    std::cout << std::endl;

}
