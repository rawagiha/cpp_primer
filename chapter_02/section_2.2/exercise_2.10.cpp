#include <iostream>
#include <string>


std::string global_str;
int global_int;

int main()
{
    std::string local_str;
    int local_int;

    std::cout << "global_str and global_int are defined outside a function\n"
              << " global_str is an empty string and global_int is zero." 
              << std::endl; 
    std::cout << global_str << " " << global_int << std::endl;
    
    std::cout << "local_str and local_int are defined inside a function\n"
              << " both have undefined values." 
              << std::endl; 
    std::cout << local_str << " " << local_int << std::endl;
    
}
