#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0) { std::cout << "created" << std::endl; }
    
    HasPtr(const HasPtr& orig) : 
        ps(new std::string(*orig.ps)), i(orig.i) { std::cout << "copied" << std::endl; }

    void show()
    {
        std::cout << ps << std::endl;
        std::cout << &i << std::endl;
    }

private:
    std::string* ps;
    int i;
};

int main()
{
    HasPtr a;
    a.show();

    HasPtr b = a;
    b.show();
}
