#include <iostream>
#include <limits>

void swap_ints(int& i, int& j)
{
    int tmp = j;
    j = i;
    i = tmp;    
}


int main()
{
    int i, j;
    std::cin >> i >> j;

    if (std::cin)
    {
        swap_ints(i, j);
    }
    else
    {
        std::cout << "Enter again. this is last chance: " << std::endl;
        
        /*reset the fail flag*/
        std::cin.clear();
        /*remove all data in the buffer
        user his Enter, it leaves '\n' in the buffer.
        std::numeric_limits<std::streamsize>::max() skips max num of chars
        until it finds '\n'*/
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        //now cin can accept new input
        std::cin >> i >> j;
        if (std::cin)
        {
            swap_ints(i, j);
        }
        else
        {
            std::cout << "Failed... " << std::endl;
            return -1;
        }
    }

    std::cout << i << " " << j << std::endl;
}
