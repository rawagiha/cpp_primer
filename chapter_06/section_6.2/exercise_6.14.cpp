#include <iostream>

void recover_cin(std::istream& cin)
{
    cin.clear();
    cin.ignore(10000, '\n');
}


int main()
{ 
    int i = -1;
    std::cout << "Enter int not characters:" << std::endl;
    std::cin >> i;

    if (!std::cin);
    {
        recover_cin(std::cin);
        std::cout << "you have a second chance" << std::endl;
        std::cin >> i;
    }
    
    std::cout << "You entered " << i << std::endl;  
}
