#include <iostream>
#include <string>
#include <cctype>

int main()
{
    const std::string hexdigits = "0123456789ABCDEF";

    std::cout << "Enter a series of numbers between 0 and 15"
              << " separated by spaces. Hit ENTER when finished: "
              << std::endl;

    std::string result;

    std::string::size_type n = 0;
    
    while(std::cin >> n)
    {
        if (n < 16)
        {
            result += hexdigits[n];
        }
        else
        {
            std::cout << n << " not processed. must be between 0 and 15" 
                      << std::endl;
            continue;
        }
    }

    std::cout << "Your hex number is: " << result << std::endl;
}
