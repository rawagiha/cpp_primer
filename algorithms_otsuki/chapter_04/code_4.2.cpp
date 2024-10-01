#include <iostream>

//sum from 1 to n
int func(int n)
{
    std::cout << "func(" << n << ") called " <<std::endl;
    
    if (!n) return 0;
    int res = n + func(n - 1);
    
    std::cout << "sum up to " << n << " = " << res << std::endl;

    return res;
}

int main()
{ 
    int n;
    std::cin >> n;

    std::cout << func(n) << std::endl;
}
