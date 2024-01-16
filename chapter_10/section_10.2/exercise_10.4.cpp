#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> v = {2.0, 3.0, 4.0, 1.0, 5.0, 6.0, 7.0, 1.0, 9.01};

    //double sum = std::accumulate(v.cbegin(), v.cend(), 0);
    // -> "0" truncated to int
    double sum = std::accumulate(v.cbegin(), v.cend(), 0.0);

    std::cout << sum << std::endl;
}
