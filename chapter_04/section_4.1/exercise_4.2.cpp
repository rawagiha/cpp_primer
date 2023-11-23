#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {5, 4, 3, 2};

    std::cout << *(vec.begin()) << std::endl;
    std::cout << (*(vec.begin())) + 1 << std::endl; 
}
