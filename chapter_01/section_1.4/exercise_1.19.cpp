#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    
    std::cout << "Enter an integer." << std::endl;
    std::cin >> v1;
    
    std::cout << "Enter a larger integer." << std::endl;
    std::cin >> v2;

    if (v1 < v2)
    {
        std::cout << "Numbers between your integers (inclusive) are" << std::endl;
    
        while (v1 < v2)
        {
            std::cout << v1 << ", ";
            ++v1;
        }
    
        std::cout << v2 << std::endl;
    }
    else
    { 
        std::cout << "First integer must be smaller than the second." 
                  << std::endl;
    }    
    
    return 0;
}
