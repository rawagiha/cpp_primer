#include <iostream>

int main()
{
    std::cout << "/*";  // legal
    std::cout << "*/";  // legal

    // this is ilegal std::cout << /* "*/" */;
    std::cout << /* "*/" */" ; // add " (https://github.com/Mooophy/Cpp-Primer/tree/master/ch01#exercise-18) 
    std::cout << /*    "*/" /*"/*"    */;
}
