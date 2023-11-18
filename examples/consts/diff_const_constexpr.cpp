#include <iostream>

int func_a(int a)
{
   return a * 2;
}

constexpr int func_b()
{
    return 123;
}

constexpr int func_c(int a)
{
    return a * 2;
}

int main()
{
    int a = 0;
    std::cin >> a;
    
    // determined at run-time
    const int _a = func_a(a);
    
    //determined at compile time
    constexpr int _b = func_b(); 
    
    //determined at compile time
    constexpr int _c = func_c(20);
    
    std::cout << _a << " " << _b << " " << _c <<  std::endl;
}
