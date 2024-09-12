#include <iostream>

class A {
    //std::string x; 
    int x;
public:
    A() {};
    //A(std::string x) : x(x) {};
    A(int x) : x(x) {};
};

class B {
    std::string x;
public:
    B() {};
    explicit B(std::string x) : x(x) {};
};

int main() {
    A a;
    A aa = 2;
    //A aa = "this is a pen.";
    //A aa("this is a pen.");
    B b;
    B bb("this is not a pen.");
}
