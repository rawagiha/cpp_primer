#include <iostream>
#include <memory>

int main()
{
    auto sp = std::make_shared<int>();//value initialized to zero
    auto p = sp.get();

    delete p; // frees the memory pointed by sp

    // when exit main, sp frees the memory that has just been freed 
    // -> double free happens
}
