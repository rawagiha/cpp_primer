#include <bitset>
#include <string>
#include <iostream>

int main()
{
    std::string bi = std::bitset<32>(8180).to_string();
    std::cout << bi << std::endl;
    std::bitset<32>  a(bi);
    
    std::cout << a.to_string().substr(32-4,4) << std::endl;

    uint32_t x = 8180;
    uint32_t y = x >> (32U - 28U);
    uint32_t z = x & ((uint32_t)1 << 4) - 1;
    std::cout << y << " " << z <<  std::endl;
}
