#include <iostream>

void function_1()
{
    size_t v1 = 42;
    
    //copies v1 into f
    auto f = [v1] { return v1; };

    v1 = 0;

    auto j = f(); // copied v1 is used -> j is 42

    std::cout << v1 << " " << j << std::endl;
}

void function_2()
{
    size_t v1 = 42;

    // f2 uses the reference to v1
    auto f2 = [&v1] { return v1; };

    v1 = 0;

    auto j = f2(); // f2 uses the ref. to v1 -> j is 0    

    std::cout << v1 << " " << j << std::endl;
}

int main()
{
    function_1();
    function_2();
}
