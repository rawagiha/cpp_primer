#include <iostream>

int main()
{
    const int v2 = 0; //can't change v2 -> top-level
    int v1 = v2; // copying only copy the value -> v1 is not const.
    int *p1 = &v1;
    int& r1 = v1;
    const int *p2 = &v2; // can change p2 -> low
    const int *const p3 = &v2; //rt const low lt const top
    const int  &r2 = v2;// low
}
