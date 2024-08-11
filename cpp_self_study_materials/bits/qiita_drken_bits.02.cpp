/*materials taken from section 2
 * https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
 */

#include <bitset>
#include <iostream>

int main()
{
    int a = 45; //0b101101 or 0x2d (hexadecimal)
    int b = 25; //0b011001 or 0x19

    /*      101101
     * and  011001
     *      001001 
     */
    
    // bitset<N> represents a set of N-bit
    std::cout << std::bitset<8>(a) << " AND " << std::bitset<16>(b) << " = " << std::bitset<16>(a&b) << std::endl;
    
     
    /*      101101
     * or   011001
     *      111101   32+16+8+4+1=(32+8)+(16+4)+1=61   
     */
    std::cout << std::bitset<8>(a) << " OR " << std::bitset<8>(b) << " = " << std::bitset<8>(a|b) << std::endl;
}
