#include <iostream>

int main()
{ 
    int sz = 3;
    for (int ix = 0; ix != 3; ++ix)
    {
        /*...*/
    }
    //if (ix != sz)  ix not accessible

    int ix = 0;
    for (/*null*/; ix != sz; ++ix)
    {
        /*...*/
    }

    /* run forever
    for (int iy = 0; iy != sz; ++iy, ++sz)
    {
    
    }*/    
}
