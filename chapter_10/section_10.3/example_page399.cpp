#include <iostream>
#include <string>
#include <vector>
#include <functional>

void f(int first, int second, int third, int forth, int fifth)
{
    std::cout << "first arg is: " << first << std::endl;
    std::cout << "second arg is: " << second << std::endl;
    std::cout << "third arg is: " << third << std::endl;
    std::cout << "fourth arg is: " << forth << std::endl;
    std::cout << "fifth arg is: " << fifth << std::endl;
}

int main()
{
    //g(_1, -2)
    auto g = std::bind(f, 1, 2, std::placeholders::_2, 4, std::placeholders::_1);
    g(5, 3);
    std::cout << std::endl;
    g(3, 5);
}
