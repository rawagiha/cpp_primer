#include <iostream>
#include <memory>


void f(std::shared_ptr<int> p)
{
    std::cout << p.use_count() << std::endl;
    *p = 505; 
    if (true) throw std::runtime_error(
                        "something is wrong.");
}

int main()
{
    auto p = std::make_shared<int>(67);
    std::cout << p.use_count() << std::endl;

    try
    {
        f(p);
    }
    catch (...)
    {
        std::cout << p.use_count() << " " << *p << std::endl;
    }

    return 0;
}
