#include <iostream>
#include <string>

int main()
{
    int i = 9;
    double d = 2.3;
    std::string s = "this is a pen";
    const std::string *ps = &s;
    char c = 'f';
    char* pc = &c;
    void* pv;
    
    //cast away const
    pv = const_cast<std::string*>(ps);

    i = static_cast<int>(*pc);
    std::cout << i << std::endl;

    pv = static_cast<void*>(&d);
    pc = static_cast<char*>(pv);
}
