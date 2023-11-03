#include <iostream>

int main()
{
    int month = 9, day = 7;
    
    //error it is octal
    //int _month = 09,  _day = 07;
    int _month = 011, _day = 07;
    std::cout << _month << " " << _day << std::endl;
}
