#include <iostream>

int main()
{
    int i = 0;
    int* p = nullptr;

    if (p)
    {
        std::cout << "p is not a null pointer. Indeed, it is " << p << std::endl; 
    }
    else
    {
        std::cout << "p is a null pointer. Indeed, it is " << p << std::endl;
        
        //if p is null, exit here!
        return 0;
    }

    // if p is null, it is illegal to dereference p
    if (*p)
    {
        std::cout << "i is not zero. Indeed it is " << *p << std::endl;
    }
    else
    {
        std::cout << "i is zero. Indeed it is " << *p << std::endl;
    }

    return 0;
    
}
