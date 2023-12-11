#include <iostream>
#include <limits>
void reset(int& i)
{
    i = 0;    
}


int main()
{
    int j;
    std::cin >> j;

    if (std::cin)
    {
        reset(j);
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
        std::cin >> j;
        if (std::cin)
        {
            reset(j);
        }
        else
        {
            std::cout << "Failed... " << std::endl;
            return -1;
        }
    }

    std::cout << j << std::endl;
}
