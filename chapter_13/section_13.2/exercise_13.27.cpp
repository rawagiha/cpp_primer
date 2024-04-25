#include <string>
#include <iostream>

class HasPtr
{
public:
    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0), use(new std::size_t(1)) { }

    HasPtr(const HasPtr& p) :
        ps(p.ps), i(p.i), use(p.use) { ++*use; }

    HasPtr& operator = (const HasPtr&);
    ~HasPtr();

    void use_count()
    {
        std::cout << *use << std::endl;
    }

    void show_pointee()
    {
        std::cout << *ps << std::endl;
    }
private:
    std::string* ps;
    int i;
    std::size_t *use;
};

HasPtr::~HasPtr()
{
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
}

HasPtr& HasPtr::operator = (const HasPtr& rhs)
{
    ++*rhs.use;
    if (--*use == 0)
    {    
        std::cout << "'" << *ps << "' has no users. Freed" << std::endl;

        delete ps;
        delete use;
    }
    
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}

int main()
{
    HasPtr p1("this is a pen");
    p1.use_count();

    HasPtr p2("Pen is that");

    HasPtr p3(p1);
    p3.use_count();
    p1.use_count();

    p2 = p1;
    p2.use_count();
    p1.use_count();

    p1.show_pointee();
    p2.show_pointee();
    p3.show_pointee();
}
