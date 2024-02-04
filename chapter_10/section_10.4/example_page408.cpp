#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

void show(const std::vector<int>& v, std::ostream& os)
{
    std::ostream_iterator<int> out(os, " ");
    for (auto elem : v)
        *out++ = elem;
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto r_iter = vec.crbegin();
        r_iter != vec.crend(); 
        ++r_iter)
    {
        std::cout << *r_iter << std::endl;
    }
    
    std::vector<int> v = {7, 3 ,8, 1, 5, 6};
    std::vector<int> vv = {7, 3 ,8, 1, 5, 6};

    std::sort(v.begin(), v.end());
    show(v, std::cout);
    
    std::sort(vv.rbegin(), vv.rend()); 
    show(vv, std::cout);
}
