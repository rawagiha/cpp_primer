#include <iostream>

int main()
{
    int sum = 0, val = 0;
   
    /* condition
     * True if istream receives an int
     * Fals otherwise (end-of-file or non-int input)
     */
    
    std::cout << "Enter integer as many as you want." << std::endl;
    std::cout << "Hit CTRL + D once done" << std::endl; 
    
    while (std::cin >> val)
    {
        sum += val;
    }

    std::cout << "Sum is: " << sum << std::endl;

    return 0;
}
