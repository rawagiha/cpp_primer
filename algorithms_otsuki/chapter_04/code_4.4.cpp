#include <iostream>


int gdc(int n, int m)
{   
    if (!m) return n;
    return gdc(m, n % m);
}

int main()
{ 
    int n, m;
    std::cin >> n >> m;
    
    std::cout << gdc(n, m) << std::endl;
}
