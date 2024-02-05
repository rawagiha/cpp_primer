#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v = {0, 1, 2 ,3, 4, 5, 6 ,7, 8, 9};
    
    std::list<int> ret_lst(8 - 3); //to use std::copy
                                   //must not be empty
    
    std::copy(v.cbegin() + 3, v.cbegin() + 8, ret_lst.rbegin());
    
    for (auto i : ret_lst) std::cout << i << " ";
    std::cout << std::endl;
}
