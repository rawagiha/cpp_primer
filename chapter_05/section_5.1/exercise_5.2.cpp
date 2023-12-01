#include <iostream>

int main()
{
    int i;
    
    std::cout << "enter a positive int that is smaller than 10" << std::endl;
    std::cin >> i;
    
    if (i >= 10)
    {
        std::cout << "ERROR: Input must be < 10" << std::endl;
        return 1;   
    }
    else if (0 < i && i < 10)
    {
        ;// pass
    }
    else
    {
        std::cout << "ERROR: Input must be positive" << std::endl;
        return 1; 
    }

    // do something with i
    return 0;
}
