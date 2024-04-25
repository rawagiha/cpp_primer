#include <iostream>
#include <string>

class Test
{
public:
    Test(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0) { }

    Test& operator = (const Test&);
    
    ~Test() { delete ps; }
    
    void show() const
    {
        std::cout << *ps << " " << ps << std::endl;
    }

private:
    std::string* ps;
    int i;
};

//wrong?
Test& Test::operator = (const Test& rhs)
{
    *ps = *rhs.ps;
    i = rhs.i;

    return *this;
}


int main()
{
    Test a("t");
    a.show();

    Test b("apenaaaD");
    b.show();

    a = b;
    a.show();

    a = a;
    a.show();
    
    b.show();
}
