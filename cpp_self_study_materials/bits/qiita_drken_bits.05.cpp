/*materials taken from section 5
 * https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
 */

#include <bitset>
#include <vector>
#include <iostream>

int main()
{    
    int n = 5;
    
    // 1<<5 -> 100000
    std::cout << std::bitset<8>(1<<n) << std::endl;
    std::cout << std::endl;
    
    for (int bit = 0; bit < (1<<n); ++bit)
    {   
        std::cout << std::endl;
        std::cout << std::bitset<8>(bit) << std::endl;
        std::cout << std::endl;

        std::vector<int> S;
        for (int i = 0; i < n; ++i)
        {
            if (bit & (1<<i))
            { 
                std::cout << std::bitset<8>(bit) << " has a flag at " << i << std::endl;
                S.push_back(i);
            }
        }

        std::cout << bit << ": {";
        for (int i = 0; i < static_cast<int>(S.size()); ++i)
        {
            std::cout << S[i] << " ";
        }

        std::cout << "}" << std::endl;
    }
}
