#include <iostream>

int main()
{
    int i = 0, j;

    j = ++i;
    std::cout << "prefix ++ returns an incremented copy " << i << " " << j << std::endl;
    
    i = 0;
    j = 0;

    j = i++;
    std::cout << "postfix ++ returns an unincremented copy " << i << " " << j << std::endl;

}
