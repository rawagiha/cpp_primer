#include <iostream>
#include <string>


std::string global_str;
int global_int;

int main()
{
    std::string local_str;
    int local_int;

    std::cout << global_str << " " << global_int << std::endl;
    std::cout << local_str << " " << local_int << std::endl;
    
}
