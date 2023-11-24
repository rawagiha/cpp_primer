#include <iostream>

int main()
{
    int8_t i = 120;
    std::cout << i << std::endl;
    std::cout << static_cast<int16_t>(i) << std::endl;
    i += 45;
    std::cout << i << std::endl;  
    std::cout << static_cast<int16_t>(i) << std::endl;

    uint8_t j = 0;
    std::cout << j << std::endl;
    std::cout << static_cast<int16_t>(j) << std::endl;
    --j;
    std::cout << j << std::endl;
    std::cout << static_cast<int16_t>(j) << std::endl;

    uint8_t k = 255;
    std::cout << k << std::endl;
    std::cout << static_cast<int16_t>(k) << std::endl;
    k += 2345;
    std::cout << k << std::endl;
    std::cout << static_cast<int16_t>(k) << std::endl;
}
