#include <iostream>

int f()
{
    /*static int i = -1;
    ++i;
    return i;*/
    static int i = 0;
    return i++;
}


int main()
{
    int k = 0;
    while (k < 10)
    {
        std::cout << f() << " + 1 times called" << std::endl;
        ++k;   
    }
}
