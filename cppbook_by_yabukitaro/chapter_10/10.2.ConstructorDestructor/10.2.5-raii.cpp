#include <iostream>

class A {
public:
    void say_hello() { std::cout << "Hello.\n"; }
    ~A() { std::cout << "A was destroyed.\n"; }
};

class WrapperForA {
public:
    A* pa; 
    WrapperForA() : pa(new A) {}
    ~WrapperForA() { delete pa; }
};

int main() {
   WrapperForA w;
   return 1;
   w.pa->say_hello();
}
