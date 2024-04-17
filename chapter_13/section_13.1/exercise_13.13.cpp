#include <iostream>
#include <vector>

struct X
{
    X() { std::cout << "X()" << std::endl; }
    X(const X&) { std::cout << "X(const X&)" << std::endl; }

    X& operator= (const X&)
    {
        std::cout << "=" << std::endl;
        return *this;
    }

    ~X() { std::cout << "~()" << std::endl; }
};


void f(const X& rx, X x) //second arg-> copy assign
{
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx); //copy assign
    vec.push_back(x);  //copy assign
   
    std::cout << "out of f scope, vec[rx, x] destoryed, second arg x destroyed " << std::endl;
}


int main()
{
    X a; //init
    std::cout << std::endl;

    X b = a; // copy int
    std::cout << std::endl;  
    
    X c; //init;
    a = c; //copy assing
    std::cout << std::endl;

    X* px = new X;
    delete px;
    std::cout << "del X" << std::endl;
    
    std::cout << std::endl;
    std::cout << "f(const X&, X)" << std::endl;
    X* py = new X;
    std::cout << std::endl;
    f(*py, *py);

    std::cout << std::endl;
    std::cout << "going out of main scope..." << std::endl;
}
