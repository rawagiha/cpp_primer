#include <memory>
#include <iostream>

int main()
{
    std::unique_ptr<int> p1; //null
    std::unique_ptr<int> p2(new int(42));

    //assign
    //p1 = p2;
    
    //copy
    //std::unique_ptr<int> p3(p2);

    std::unique_ptr<int> p3(p2.release());

    std::cout << *p3 << std::endl;

    if (!p2) std::cout << "p2 is null" << std::endl;
}
