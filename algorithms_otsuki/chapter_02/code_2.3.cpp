#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i <= n; i += 2)
    {
        if (i < n - 1) std::cout << i << ", ";
        else std::cout << i << std::endl;
    }
}
