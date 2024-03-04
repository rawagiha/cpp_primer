#include <memory>
#include <string>
#include <iostream>
int main()
{
    std::shared_ptr<int> p3 = std::make_shared<int>(42);
    std::cout << *p3 << std::endl;

    //value initialized to zero
    std::shared_ptr<int> p4 = std::make_shared<int>();
    std::cout << *p4 << std::endl;
    
    //value initialized to empty str
    auto p5 = std::make_shared<std::string>();
    std::cout << *p5 << std::endl;
}
