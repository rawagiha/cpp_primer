#include <iostream>

int main()
{
    int i;
    int& r1 = i;
    
    i = 5; 
    r1 = 10; // same as i = 10

    std::cout << i << " " << r1 << std::endl;
}
