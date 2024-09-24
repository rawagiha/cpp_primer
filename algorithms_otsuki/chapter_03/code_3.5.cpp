#include <iostream>
#include <bitset>
int main()
{
    //8 
    std::cout << (1 << 3) << std::endl;
    
    unsigned int a = 1 << 3;
    //01000
    std::cout << std::bitset<5>(a) << std::endl;

    for (int i = 0; i < 17; ++i)
    {
        if (i & a) std::cout << std::bitset<5>(i) << " " << i << std::endl;
    }  
}
