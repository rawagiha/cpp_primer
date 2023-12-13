#include <iostream>
#include <vector>
#include <iterator> 

void ref_vec_print(std::vector<int>::iterator begin, const std::vector<int>::iterator end)
{
    if (begin != end)
    {
        std::cout << *begin << std::endl;
        return ref_vec_print(++begin, end);
    }   
}


int main()
{
    std::vector<int> vec = {8, 9, 4, 3, 99, 0, 1242};

    ref_vec_print(vec.begin(), vec.end());
}
