#include <iostream>
int main()
{
    //Syntax error std::cout << Hello << std::endl;  
    std::cout << "Hello" << std::endl;

    //Type error char c = "c"; type error double quote is for string 
    char c = 'c';
    std::cout << sizeof(c) << std::endl;
    
    //Declaration error
    int a = 7;
    std::cout << a << std::endl;

    return 0;
}

