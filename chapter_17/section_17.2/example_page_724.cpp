#include <iostream>
#include <bitset>

int main()
{
    std::bitset<4> bitvec1(0xf3); //0xf3 = 1111 0011
    
    std::cout << bitvec1 << std::endl; //0011 higher 1111 discarded
    
    std::bitset<16> bitvec2(0xf3);

    std::cout << bitvec2 << std::endl; // 0000 0000 1111 0011
}
