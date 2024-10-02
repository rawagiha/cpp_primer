#include <iostream>

int fibo(int n)
{
    std::cout << "fibo(" << n << ") called. " << std::endl;

    if (n == 0) return 0;
    else if (n == 1) return 1;
    
    int res =  fibo(n - 1) + fibo(n - 2);

    std::cout << "fibo(" << n << ") = " << res << std::endl;

    return res;
}

int main()
{ 
    int n;
    std::cin >> n;
    fibo(n);
 }

