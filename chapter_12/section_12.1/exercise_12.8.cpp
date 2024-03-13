#include <iostream>

int* b()
{
    int* p = new int;
    *p = 3;
    return p;
}

int main()
{
    auto p = b();
    std::cout << *p << std::endl;

    delete p;

    return 0;
}
