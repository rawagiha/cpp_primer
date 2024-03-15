#include <iostream>
#include <memory>

void process(std::shared_ptr<int> ptr)
{
    std::cout << "inside process... use_count: " 
              << ptr.use_count() 
              << std::endl;
    *ptr = 200;
}

int main()
{
    std::shared_ptr<int> p(new int(42));
    std::cout << *p << " " << p.use_count() << std::endl;
    
    process(p);
    
    std::cout << *p << " " << p.use_count() << std::endl;    
}
