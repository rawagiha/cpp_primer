#include <iostream>

//val is a parameter
int fact()
{
    int val;
    std::cout << "Enter a positive int" << std::endl;

    if (!(std::cin >> val) || val < 0)
    {
        std::cout << "Invalid input" << std::endl;
        exit(0);
    }
    
    int ret = 1;
    while (val > 1)
        ret *= val--;

    return ret;
}

int main()
{
    int j = fact();
    std::cout << j << std::endl;
}
