#include <iostream>

//sum from 1 to n
int func(int n)
{
    std::cout << "now doing: " << n << std::endl;
    if (!n) return 0;
    return n + func(n - 1);
}

int main()
{ 
    int n;
    std::cin >> n;

    std::cout << func(n) << std::endl;
}
