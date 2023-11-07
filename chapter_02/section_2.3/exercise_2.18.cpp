#include <iostream>

int main()
{
    int i = 2;
    int j = 3;
    int* pi = &i;

    std::cout << "address of int i is: " << pi << std::endl;

    pi = &j;
    std::cout << "pi now points to int j: " << pi << std::endl;

    j = 1;
    std::cout << "j = 1 (was 3) won't change pi (points to j) "
              << pi << std::endl;
    
    *pi = 4;
    std::cout << "*pi = 4 changes j from 1 to 4. No change in address: " 
              << pi << " " << j << std::endl; 
}
