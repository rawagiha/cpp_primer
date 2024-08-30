#include <iostream>

bool is_satiffied(const int i, const int j, const int k)
{
    if (!k) return false;
    
    int a = (20 + i) * j
    
    //tens digit of a must be 3
    if ((a / 10) % 10 != 3) return false;

    int b = (20 * i) * (k * 10);

    if (b < 100) return false;

    int c = a + b;

    if ((c / 10) % 10 != 4) return false;

    return true;
}


