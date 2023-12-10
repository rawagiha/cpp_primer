#include <iostream>

// i is a param
int f1(int i)
{
    return i * i;
}

int f2(int i)
{
    //j is local val
    int j = 0;
    
    if (i % 2) j = 2;
    else j = 3;

    return i * j;
}

int f3(int i)
{
    static int k = 0;
    ++k;
    return i * k;
}


int main()
{
    int i = 7;
    std::cin >> i;

    std::cout << f1(i) << std::endl;

    std::cout << f2(i) << std::endl;
    
    while (i < 10)
    {
        std::cout << f3(i) << std::endl;
        ++i;
    }
}
