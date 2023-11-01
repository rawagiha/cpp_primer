#include <string>
#include <iostream>
int main()
{
    char c = 'c';
    //char = 1 byte
    std::cout << sizeof(c) << std::endl;
    
    std::string c1 = "c";
    /*
     * sizeof is a compile time operator which returns 
     * the size in bytes of an object representation, 
     * which is the size of its layout in memory. 
     * It has nothing to do with the std::string content.
     * https://stackoverflow.com/questions/20696236/string-size-always-32-bytes   
     */
    // this is 32 bytes
    std::cout << sizeof(c1) << std::endl;
    // this is one (single letter)
    std::cout << c1.size() << std::endl; 

    std::string c7 = "ccccccc";
    
    // this is 32 byte
    std::cout << sizeof(c7) << std::endl;
    // this is seven
    std::cout << c7.size() << std::endl;
}

