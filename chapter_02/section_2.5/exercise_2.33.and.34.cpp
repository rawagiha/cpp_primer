#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r; // a is int (not ref to a int)
    
    a = 42; // won't change i
    std::cout << i << " " << a << std::endl;

    const int ci = i, &cr = i; //ci has top-level const, low-level const for cr
    auto b = ci; // top-level ignored
    b = 42;
    std::cout << ci << " " << b << std::endl;
    
    auto c = cr; //c is int. top-level const ignored
    c = 42;
    std::cout << cr << " " << b << std::endl;

    auto d = &i; // d is int* not ref to int
    // d = 42; error int assigned to int*
    
    auto e = &ci;// d is const int*. underlying obj is const int
    //e = 42; error int assigned to const int*
    
    auto& g = ci; //ref to const int (low level
    // g = 42; g is read only
 
}
