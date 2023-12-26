#include <iostream>

class NoDefault
{
public:
    NoDefault(int i) : i_(i) 
    {
        std::cout <<"NoDefault constructor executed" << std::endl;
    }
private:
    int i_;
};

class C
{
public:
    C() : nd(0) 
    {
        std::cout << "default constructor executed" << std::endl;
    
    }
private:
    NoDefault nd;
};

int main()
{
    C c;    
}
