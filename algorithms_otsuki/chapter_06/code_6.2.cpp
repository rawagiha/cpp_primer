#include <iostream>
#include <vector>
#include <algorithm>

bool f(double x)
{
    return (x >= 0.0);
}

double binary_search(double left, double right)
{
    while (right - left > 0.5)
    {
        double mid = left + (right - left) / 2;

        if (f(mid)) right = mid;
        else left = mid;
    }

    return right;
}


int main()
{
    double left, right;
    std::cin >> left >> right;
    if (left > 0.0 || right <= 0.0) return 1;
    if (right - left <= 0.5) return 1;

    std::cout << binary_search(left, right) << std::endl;
}
