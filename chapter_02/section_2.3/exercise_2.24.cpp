#include <iostream>

int main()
{
    int i = 42;
    void* p = &i; //legal, void* can hold any type

    //long *lp = &i; type is different. no implicit coversion allowed for pointers
}
