#include <iostream>

int main()
{
    int* ip = nullptr;
    std::cout << ip << std::endl;

    char* cp = nullptr;
    //CRASH std::cout << cp << std::endl;
    //https://stackoverflow.com/questions/16912645/c-setting-char-pointer-to-null
    //for char*, << interpret cp as string
    
    //void* hold address of anything
    std::cout << static_cast<void*>(cp) << std::endl;

}

