/*materials taken from section 4
 * https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
 */

#include <bitset>
#include <iostream>

const unsigned int BIT_FLAG_STATUS_A = (1 << 0); // 0001
const unsigned int BIT_FLAG_STATUS_B = (1 << 1); // 0010
const unsigned int BIT_FLAG_STATUS_C = (1 << 2); // 0100
const unsigned int BIT_FLAG_STATUS_D = (1 << 3); // 1000
    
const unsigned int MASK_A = BIT_FLAG_STATUS_A;
const unsigned int MASK_AC = BIT_FLAG_STATUS_A | BIT_FLAG_STATUS_C;
const unsigned int MASK_AD = BIT_FLAG_STATUS_A | BIT_FLAG_STATUS_D;
const unsigned int MASK_BC = BIT_FLAG_STATUS_B | BIT_FLAG_STATUS_C;

int main()
{    
    unsigned int status = 0;
    std::cout << "start: " << std::bitset<4>(status) << std::endl;  
    
    status |= MASK_A;
    std::cout << "got status A: " << std::bitset<4>(status) << std::endl;  
   
    status |= MASK_AC;
    std::cout << "got status A C: " << std::bitset<4>(status) << std::endl;

    if (status & MASK_BC) // 0100
    {
        std::cout << "current status is with B or C, or both" << std::endl;
    }

    status &= ~MASK_BC; //0110 -> 1001 + 0101 -> 0001 
    std::cout << "void status B and C: " << std::bitset<4>(status) << std::endl;

    status |= MASK_AD;
    std::cout << "got status A D: " << std::bitset<4>(status) << std::endl;

    status &= ~MASK_BC; //0110 -> 1001 + 1001 -> 1001
    std::cout << "void status B and C: " << std::bitset<4>(status) << std::endl;
}
