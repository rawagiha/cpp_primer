#include <iostream>
#include <memory>

int main()
{
    int* q = new int(42), *r = new int(100);
    std::cout << r << " " << q << std::endl;
    
    r = q; // r and q point to the same address
   
    std::cout << r << " " << q << std::endl;
    std::cout << "can't free the memory allocated to the orignal r" << std::endl;

    auto q2 = std::make_shared<int>(42), r2 = std::make_shared<int>(100);
    std::cout << q2.use_count() << " " << r2.use_count() << std::endl;

    r2 = q2; //r2 ref count to 100 becomes zero -> freed
    std::cout << q2.use_count() << " " << r2.use_count() << std::endl;

    //https://github.com/Mooophy/Cpp-Primer/blob/master/ch12/README.md#exercise-129
}
