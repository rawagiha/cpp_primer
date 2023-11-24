#include <iostream>

int main()
{
    int i;
    
    if (std::cin >> i)
    {
        if (i % 2) //expression test if i is even/odd
        {
            std::cout << "odd" << std::endl;
        }
        else
        {
            std::cout << "even" << std::endl;
        }
    }
    else
    {
        std::cout << "invalid input" << std::endl;
    } 
}
