#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string& s = std::string()) :
        ps(new std::string(s)), i(0) { std::cout << "created" << std::endl; }
    
    HasPtr(const HasPtr& orig) : 
        ps(new std::string(*orig.ps)), i(orig.i) { std::cout << "copied" << std::endl; }

    HasPtr& operator = (const HasPtr&);
    void show()
    {
        std::cout << ps << std::endl;
        std::cout << &i << std::endl;
    }

private:
    std::string* ps;
    int i;
};


HasPtr&
HasPtr::operator = (const HasPtr& rhs)
{
    if (this != &rhs)
    {
        i = rhs.i;
        
        std::string* tmp = new std::string(*rhs.ps); 
        std::cout << tmp << " " << ps << std::endl;

        delete ps;  //destroy current string 

        ps = tmp;
    
    }
    std::cout << "copy & assign" << std::endl;

    return *this;
}


int main()
{
    HasPtr a;
    a.show();

    HasPtr b = a;
    b.show();

    HasPtr c;
    c.show();
    a = c;

    a.show();
    
}
