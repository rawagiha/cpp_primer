#include <vector>
#include <iostream>

int main()
{
    std::vector<int> a = {4, 3,12, 7, 11, 1, 9, 8, 14, 6};

    std::cout << a[0] << std::endl;

    std::cout << a[2] << std::endl;

    a[2] = 5;

    std::cout << a[2] << std::endl;
}
