#include <iostream>
#include <string>

int main(int argc, char *argv[])
{   
    if (argc < 3) 
    {
        std::cout << "To few args. Must supply 2 strings" << std::endl;
        exit(0);
    }
    
    for (int i = 1; i != argc; ++i)
    {
        if (std::string(argv[i]) == "-d")
        {
            std::cout << "The d option is used" << std::endl;
        }

        if (i + 1 != argc && std::string(argv[i]) == "-o")
        {
            std::cout << "Output filename is " << std::string(argv[i + 1]) << std::endl;
        } 
    }
    
    
    std::cout << std::string(argv[1]) + std::string(argv[2]) << std::endl;
}
