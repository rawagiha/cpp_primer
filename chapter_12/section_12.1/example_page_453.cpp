#include <iostream>
#include <memory>

struct Foo
{
    int i = -1;
    Foo(const int x) : i(x) { }
};

std::shared_ptr<Foo> factory(int i)
{
    return std::make_shared<Foo>(i);
}

std::shared_ptr<Foo> use_factory(int i)
{
    std::shared_ptr<Foo> p = factory(i);
    
    std::cout << "inside use_factory " << p.use_count() << std::endl;
    
    ++(p->i);

    return p;
}

int main()
{
    auto p = factory(3);
    std::cout << p.use_count() << " " << p->i << std::endl;

    auto q = use_factory(3);
    std::cout << q.use_count() << " " << q->i << std::endl;

    p = use_factory(4);
    std::cout << p.use_count() << " " << p->i << std::endl;
    std::cout << q.use_count() << std::endl;
}
