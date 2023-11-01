#include <iostream>

int main()
{
    int curr_val = 0, val = 0;

    if (std::cin >> curr_val) //ensures the input is valid
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == curr_val) ++cnt;
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
