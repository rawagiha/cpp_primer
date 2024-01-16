#include <vector>
#include <algorithm>
#include <iostream>


int main()
{
    std::vector<int> v = {2, 3, 1, 4, 1, 3, 2, 4, 6, 6, 2, 1, 3};
    auto cnt = std::count(v.cbegin(), v.cend(), 2);

    std::cout << cnt << std::endl;
}
