#include <iostream>


void func_1(int* p)
{
    (*p)++;
    p = nullptr;
}

void func_2(int*& p)
{
    (*p)++;
    p = nullptr;
}

int main()
{
    int* a = new int(10);
    
    std::cout << a << std::endl;

    int* b = a;

    std::cout << b << std::endl;

    *b = 3;

    std::cout << *a << " " << *b << std::endl;

    int*& c = a;

    std::cout << c << std::endl;

    delete a;
    a = nullptr;

    std::cout << a << " " << b << " " << c << std::endl;
    
    int n = 9;
    int* p = &n;
    func_1(p);
    std::cout << n << " " << p << std::endl;

    func_2(p);
    std::cout << n << " " << p << std::endl; 
}
