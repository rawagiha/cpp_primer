#include <iostream>

int main()
{
    std::cout << "If all same, the code under else will not be executed." << std::endl;
    std::cout << "If no duplicate, the code under else will not be executed." << std::endl;
   
    int curr_val = 0, val = 0;

    if (std::cin >> curr_val) //ensures the input is valid
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == curr_val) 
            {    
                std::cout << "same as prev" << std::endl;
                ++cnt;
            }
            else
            {
                std::cout << curr_val << " occurs " 
                          << cnt << " times" << std::endl;
                
                curr_val = val;
                cnt = 1;
            }
        }

        std::cout << curr_val << " occurs "
                  << cnt << " times" << std::endl;
    }

    return 0;
}
