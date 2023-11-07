#include <iostream>

int get_size()
{
    return 5120;
}


int main()
{
    const int i = get_size(); // ok. initialize at run time
    const int j = 512; // ok. initialize at complile time
    //const int h; must be initialized
    
    
    int k = 9;
    
    k = i; // i is const, only the value is copied. Not "const"ness.
    std::cout << k << std::endl;
    
    k = 789; //can change
    std::cout << k << std::endl;
}
