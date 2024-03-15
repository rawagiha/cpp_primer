#include <iostream>
#include <memory>

//pass by value -> ptr copied -> ref cnt up
void process(std::shared_ptr<int> ptr)
{
    std::cout << "inside process... use_count: " 
              << ptr.use_count() 
              << std::endl;
    *ptr = 200;
}

int main()
{
    auto p = new int();
    auto sp = std::make_shared<int>();//value initialized to zero

    process(sp); 
    //process(new int()); type is different (int*)
    //process(p); int*
    process(std::shared_ptr<int>(p));
}
