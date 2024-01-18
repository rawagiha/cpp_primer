#include <iostream>

/*
 * The type of a lambda expression is unspecified. 
 *https://stackoverflow.com/questions/7951377/what-is-the-type-of-lambda-when-deduced-with-auto-in-c11
*/

auto f = [] (const int a, const int b) -> int { return a + b; };

int main()
{
    std::cout << f(3, 47) << std::endl;    
}
