#include <iostream>
#include <vector>
#include <string>

template <typename T>
int compare(const T& v1, const T& v2)
{
    if (v1 < v2) return -1;
    if (v1 > v2) return 1;
    return 0;
}


int main()
{
    std::cout << compare(2, 2) << std::endl;

    std::string a{"this is a pen"}, b{"chunky water bottle"};
    std::cout << compare(a, b) << std::endl;

    std::vector<int> c{1, 2, 3}, d{1, 9};
    std::cout << compare(c, d) << std::endl;
}
