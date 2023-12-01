#include <iostream>

int main()
{
    int i;
    
    std::cout << "enter a positive int that is smaller than 10" << std::endl;
    std::cin >> i;
    
    //validate input
    if (i >= 10) return 1;   
    else if (0 < i && i < 10) ;// pass
    else return 1; 
    
    std::cout << "Good input " << std::endl;
    return 0;
}
