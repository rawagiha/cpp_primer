#include <iostream>

void function_3()
{
    size_t v1 = 42;

    // copies v1 into f3
    auto f3 = [v1] () mutable { return ++v1; };

    v1 = 0;
    
    auto j = f3(); // j is 43
    
    std::cout << v1 << " " << j << std::endl;
}

void function_4()
{
    size_t v1 = 42;

    // f4 uses a ref to v1 
    auto f4 = [&v1] () mutable { return ++v1; };

    v1 = 0; // v1 in f4 becomes 0
    
    auto j = f4(); // ++0 -> j is 1, v1 is also 1
    std::cout << v1 << " " << j << std::endl;
}

int main()
{
    function_3();
    function_4();
}
