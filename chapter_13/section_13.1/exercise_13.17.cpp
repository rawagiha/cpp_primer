#include <iostream>


class numbered_1
{
public:
    static int unique; // ISO C++ forbids in-class initialization of non-const static member
    numbered_1()
    {
        mysn = unique++;
    }

    int mysn;
};

//static member can access from here
int numbered_1::unique = 7;

void f(numbered_1 s)
{
    std::cout << s.mysn << std::endl;
}




/////////////////////////////////////////////////////////////////
class numbered_2
{
public:
    static int unique;
    numbered_2()
    {
        mysn = unique++;
    }

    int mysn;

    //copy construcor
    numbered_2(const numbered_2& orig)
    {
        mysn = orig.mysn * 2;    
    }
};

int numbered_2::unique = 7;

void g(numbered_2 s)
{
    std::cout << s.mysn << std::endl;
}

void e(const numbered_2& s)
{
     std::cout << s.mysn << std::endl;
}


int main()
{   
    numbered_1 a, b = a, c = b;
    f(a); f(b); f(c);

    numbered_2 a2, b2 = a2, c2 = b2; //b2 and c2 copy initialized
    std::cout << a2.mysn << " " << b2.mysn << " " << c2.mysn << std::endl; //7, 14, 28
    g(a2); g(b2); g(c2); //pass by value -> copy -> 14, 28, 56

    e(a2); e(b2); e(c2); //pass by ref -> not copy -> 7, 14, 28
}
