#include <iostream>

int main()
{
    int x = 3;
    
    //capture by copy 
    // x is copied at the point of lambda definition
    auto a = [=](int y) { std::cout << x << " " << x * y << std::endl; };

    a(4); 

    // capture by reference
    // x is used as updated
    auto b = [&](int y) { std::cout << x << " " << x * y << std::endl; };

    x = 8;
    a(4);
    b(4);
}
