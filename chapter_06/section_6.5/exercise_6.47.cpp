#include <iostream>
#include <vector>


void print_vec(std::vector<int>& vec)
{
    static int i = 0;
#ifndef NDEBUG
    std::cout << "vector size: " << vec.size() << std::endl;
#endif
    if (!vec.empty())
    {
        auto tmp = vec.back();
        vec.pop_back();
        print_vec(vec);
        ++i;
        std::cout << i << " times called " << std::endl;         
        std::cout << tmp << " ";
    }
}

int main()
{
    std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    print_vec(vec);
    std::cout << std::endl;

}
