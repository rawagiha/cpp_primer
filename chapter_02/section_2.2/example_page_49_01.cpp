#include <iostream>

int reused = 42; //global scope

int main()
{
    int unique = 0; //block scope

    std::cout << reused << " <- global " 
              << unique << std::endl;
    
    int reused = 0; //local variable with same name hides the global!!
    
    std::cout << reused << " <- local "
              << unique << std::endl;
    
    //explicitly access to the global by scope operator
    std::cout << ::reused << " <- global " 
              << unique << std::endl;
              
    return 0;  
}
