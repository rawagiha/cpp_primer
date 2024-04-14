#include <iostream>

class Foo
{
public:
    Foo();
    Foo(const Foo&);
    void set_ints(int i, int j);
    void show_ints();
private:
    int a = 8;
    int b = 9;
};

void Foo::set_ints(int i, int j)
{
    a = i;
    b = j;
}

void Foo::show_ints()
{
    std::cout << a << " " << b << std::endl;
}

Foo::Foo() { }

Foo::Foo(const Foo& orig) :
    a(orig.a), b(orig.b) { std::cout << "copied" << std::endl; }

int main()
{
    Foo x; //direct init
    
    x.set_ints(3, 4);

    Foo y = x; //copy initialization 
    
    y.show_ints();
}

