#include <iostream>

int the_larger(const int i, const int* p)
{
    if (i < *p) return *p;
    else return i;
}


int main()
{
    int j = 7;
    const int* p = &j;
    
    int i;
    std::cin >> i;
    
    std::cout << the_larger(i, p) << std::endl;   
}
