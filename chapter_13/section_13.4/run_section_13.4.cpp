#include "section_13.4.h"
#include <iostream>

int main()
{
    Folder f;
    Message m("this is a pen");
    m.save(f);
    Message k(m);
    
    Folder g(f);
    g.show();

    Message p("17 year cicada");
    p.save(g);
    k.remove(f);
    
    std::cout << std::endl;
    g.show();
    std::cout << std::endl;
    f.show();
}
