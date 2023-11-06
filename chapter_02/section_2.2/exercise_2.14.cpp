#include <iostream>

int main()
{
    int i = 100, sum = 0;
    
    // this i is local to this loop
    for (int i = 0; i != 10; ++i) 
    {   
        sum += i; // i = 0, 1, 2, ..., 9
    }

    std::cout << i << " " << sum << std::endl;
}
