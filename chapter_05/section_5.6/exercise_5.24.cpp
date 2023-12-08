#include <iostream>
#include <stdexcept>

int main()
{
    int i = 0, j = 0;

    while (std::cin >> i >> j)
    {    
        try
        {
            if (j)
                std::cout << i / j << std::endl;
            else
                throw std::runtime_error("dividing by zero");
        }
        catch (std::runtime_error err)
        {
            std::cout << err.what() << std::endl;
            std::cout << "Try again? Enter y or n" << std::endl; 
            
            char c;
            std::cin >> c;
            if (!std::cin || c == 'n')
                break; 
        }
    }
}
