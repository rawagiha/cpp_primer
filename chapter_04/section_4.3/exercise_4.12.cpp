#include <iostream>

int main()
{
    int i, j, k;
    std::cin >> i >> j >> k;

    if (i != j < k)
    {
        if (j < k)
        {
            std::cout << k << " is larger than " << j 
                      << " and " << i << " is not 1." << std::endl;
        }
        else
        {
            std::cout << k << " is NOT larger than " << j
                     << " and " << i << " is not 0. " << std::endl;
        }
    }
    else
    {
        if (j < k)
        {
            std::cout << k << " is larger than " << j
                      << " and " << i << " is 1." << std::endl;
        }
        else
        {
            std::cout << k << " is NOT larger than " << j
                     << " and " << i << " is 0. " << std::endl;
        }
    }
}
