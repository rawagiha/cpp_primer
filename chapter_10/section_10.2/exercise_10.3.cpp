#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> v = {2, 3, 4, 1, 5, 6, 7, 1, 9};

    int sum = std::accumulate(v.cbegin(), v.cend(), 0);

    std::cout << sum << std::endl;
}
