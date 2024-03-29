#include <iostream>
#include <string>
#include <memory>

int main()
{
    const size_t n = 5;
    
    std::allocator<std::string> alloc;
    auto const p = alloc.allocate(n);

    std::string s;
    auto q = p; // q points the first empty string

    while (std::cin >> s && q != p + n)
        alloc.construct(q++, s);
    
    for (auto  _p = p; _p != q; ++_p)
        std::cout << *_p << std::endl;
    
    std::cout << std::endl;
    std::cout << "show in reverse order" << std::endl;
    std::cout << std::endl;
    
    while (q != p)
    {
        std::cout << *--q << std::endl;
        alloc.destroy(q);
    } 

    alloc.deallocate(p, n);
}
