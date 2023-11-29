#include <iostream>

int main()
{
    int x[10];
    int* p = x;
    int i;
    int* q = nullptr;   
    std::cout << sizeof(x) << std::endl;
    std::cout << sizeof(i) << std::endl;
    std::cout << sizeof(q) << std::endl;
    // size of array x
    std::cout << sizeof(x) / sizeof(*x) << std::endl;
    
    // pointer size / int size
    // pointer size = implementation-dependent
    std::cout << sizeof(p) / sizeof(*p) << std::endl;
}
