#include <iostream>

int main()
{
    int i = 9;
    if (i >= 5)
        if (i % 3)
            std::cout << "a multiple of 3" << std::endl;
    
    else // this else is associated with closest if
        std::cout << i << " is smaller than 5" << std::endl;
}

