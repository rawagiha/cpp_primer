#include <iostream>
#include <string>

std::string sa[10]; //empty string
int ia[10]; // zero

int main()
{
    std::string sa2[10]; //empty string
    int ia2[10]; //undefined

    for (auto& elem : sa)
        std::cout << elem << std::endl;
    
    for (auto& elem : ia)
        std::cout << elem << std::endl;

    for (auto& elem : sa2)
        std::cout << elem << std::endl;

    for (auto& elem : ia2)
        std::cout << elem << std::endl;
}
