#include <iostream>

//I think this
/*  
 *  use for when there is a known number of iterations
 *  use while constructs when the number of iterations in not known in advance
 *  
 *  https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming
 */

int main()
{
    int val = 0;
    std::cout << "Enter an integer > 1 " << std::endl;
    
    std::cin >> val;

    int cnt = 0;
    while (val > 1) //we don't know val in advance
    {
        val /= 2;
        ++cnt;
    }
    
    std::cout << "Your integer is divisible by 2 for " 
              << cnt << " times." 
              << std::endl;
    
    return 0;
}
