#include <iostream>
#include <string>

std::string f()
{
    std::string s;
    std::cout << "Enter a word" << std::endl;
    std::cin >> s;
    return s;
}

int f2(int i)
{
    return i * i;
}

int calc(int v1, int v2)
{
    return v1 + v2;
}

// need block {}
double square(double x) 
{
    return x * x;
}

int main()
{
    std::cout << f() << std::endl;
}
