/*materials taken from section 3
 * https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
 */

#include <bitset>
#include <iostream>

int main()
{
    const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
    const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
    const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
    const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
    const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
    const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
    const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
    const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000

    
    std::cout << BIT_FLAG_3 << " " << BIT_FLAG_3 + 9063 << std::endl;

    unsigned int bit = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
    std::cout << "{1, 3, 5} = " << std::bitset<16>(bit) << std::endl; 
   
    unsigned int _bit  = bit & BIT_FLAG_3;
    std::cout << "{3} = " << std::bitset<16>(_bit) << std::endl;
    
    if (bit & BIT_FLAG_3)
    {
        std::cout << "3 is in  " << std::bitset<16>(bit) << std::endl;
    }

    unsigned int _bit_ = bit & BIT_FLAG_0;
    std::cout << "{ } = " << std::bitset<16>(_bit_) << std::endl;

    if (!(bit & BIT_FLAG_0))
    {
        std::cout << "0 is not in  " << std::bitset<16>(bit) << std::endl;
    }

    unsigned int bit2 = BIT_FLAG_0 | BIT_FLAG_3 | BIT_FLAG_4; // {0, 3, 4}

    //{1, 3, 5} & {0, 3, 4} -> {3}
    std::cout << std::bitset<16>(bit) << " AND " << std::bitset<16>(bit2) 
              << " = " << std::bitset<16>(bit & bit2) << std::endl;
    
    //{1, 3, 5} | {0, 3, 4} -> {0, 1, 3, 4, 5}
    std::cout << std::bitset<16>(bit) << " OR " << std::bitset<16>(bit2) 
              << " = " << std::bitset<16>(bit | bit2) << std::endl;

    std::cout << "before: " << std::bitset<16>(bit) << std::endl;
    bit |= BIT_FLAG_6;
    //{1, 3, 5, 6}
    std::cout << "after: " << std::bitset<16>(bit) << std::endl;

    std::cout << std::bitset<16>(BIT_FLAG_3) << " ~ -> " 
              << std::bitset<16>(~BIT_FLAG_3) << std::endl;
    
    std::cout << "before: " << std::bitset<16>(bit2) << std::endl;
	bit2 &= ~BIT_FLAG_3;
	std::cout << "after : " << std::bitset<16>(bit2) << std::endl;

}
