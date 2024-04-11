#include <iostream>
#include <memory>

//ref: https://ameblo.jp/nana-2007-july/entry-10078272385.html

struct A
{
    std::shared_ptr<A> cycle;

    ~A(){ std::cout << "A is destroyed." << std::endl; };
};

int main()
{
    std::shared_ptr<A> a1(new A);
    std::shared_ptr<A> a2(new A);
    
    std::cout << a1.use_count() << " " << a2.use_count() <<  std::endl;

    a1->cycle = a2;
    a2->cycle = a1;
    
    std::cout << a1.use_count() << " " << a2.use_count() << std::endl;
    
    std::shared_ptr<A> a3(new A);
}
