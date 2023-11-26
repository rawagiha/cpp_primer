#include <iostream>

int* getPtr(int& i)
{
    return &i;
    //return nullptr;
}

int main()
{
    int i = 1024;
    int* p = nullptr;
 
    std::cout << &i << std::endl;
    if ((p = getPtr(i)) != 0)
    {
        std::cout << p << " " << *p << std::endl;    
    }

    if (i == 1024)
    {
        std::cout << i << " equals 1024" << std::endl;
    }
}
