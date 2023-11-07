#include <iostream>

int main()
{
    std::cout << "reference is not an object" << std::endl;
    std::cout << "pointer is an object" << std::endl;
    
    //from https://github.com/Mooophy/Cpp-Primer/tree/master/ch02
    std::cout << "reference is another name of existing obj\n"
              << "cannot rebind to a different obj" << std::endl;
    
    int a = 9;
    int& ref_a = a; //must be initialized with an object 
                   // ref_a will stick to object a
    
    int b = 10;  //another object
    ref_a = b; // ref_a still binds to a. a's value changes from 9 to 10
    
    b = 12;  // b changed
    std::cout << ref_a << std::endl; // 10

    std::cout << "pointer can poit to different objects" << std::endl;

    int c = 8;
    int* pc = &c; // now points to c
    
    int d = 7;
    pc = &d; // now reassigned. points to d
    
    *pc = 999;
    std::cout << d << std::endl;



    


}
