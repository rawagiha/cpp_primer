#include <vector>

int f()
{
    return 7;
}

int main()
{
    std::vector<int> vi(100);

    int&& r1 = f(); //f() returns lvalue
    int& r2 = vi[0]; //subscript returns lvalue reference
    int& r3 = r1; //r1 is lvalue;
    int&& r4 = vi[0] * f(); // lvalue  
}
