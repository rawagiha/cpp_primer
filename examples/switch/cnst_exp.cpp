#include <iostream>

int main()
{
    constexpr int a = 123;
    
    int i = 0;
    std::cin >> i;
    switch(i)
    {
        //case labels must be integral const expression
        //can't have same value more than once.
        
        case a:
            std::cout << "it is 123" << std::endl;
            break;
        //case 123: error same as 'a'
        case 124:
            std::cout << "it is 124" << std::endl;
            break;
        default:
            std::cout << "some other value " << i << std::endl; 
            break;
    }
    
}

