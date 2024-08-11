/*materials taken from section 1 
 * https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
 */

#include <iostream>

int main()
{
    int a = 45; //0b101101 or 0x2d (hexadecimal)
    int b = 25; //0b011001 or 0x19

    /*      101101
     * and  011001
     *      001001 
     */
    std::cout << a << " AND " << b << " = " << (a&b) << std::endl;
    
     
    /*      101101
     * or   011001
     *      111101   32+16+8+4+1=(32+8)+(16+4)+1=61   
     */
    std::cout << a << " OR " << b << " = " << (a|b) << std::endl;
}
