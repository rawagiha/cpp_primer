#include <iostream>
#include <vector>

int add(int i, int j)
{
    return i + j;
}

int subtract(int i, int j)
{
    return i - j;
}

int multiply(int i, int j)
{
    return i * j;
}

int divide(int i, int j)
{
    return i / j;
}

using PF = int(*)(int, int);

int main()
{
    std::vector<PF> func_ptrs{add, subtract, multiply, divide};

    for (const auto& func : func_ptrs)
        std::cout << func(9, 3) << std::endl;
}   
