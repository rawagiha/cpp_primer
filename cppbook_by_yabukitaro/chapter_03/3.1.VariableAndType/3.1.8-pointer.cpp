// needs -std=c++11 or higher to compile
#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int a = 10;
    int* pA = &a;
    int** ppA = &pA;
    
    cout << "the address of int a is " << pA << endl;
    cout << "the type of pA is " << typeid(pA).name() << endl;
    cout << "\n";
    cout << "the address of pA is " << ppA << endl;
    cout << "the type of ppA is " << typeid(ppA).name() << endl;

    *pA = 15;
    cout << a << endl;
    
    **ppA = 30; 
    cout << a << endl;

    *ppA = nullptr; // *ppA -> pA
    cout << ppA << endl;
    cout << pA << endl; // null pointer
    cout << typeid(pA).name() << endl;
    // cout << *pA << endl; undefined. I got a segmentation fault.
    cout << &a << endl; // no change 
}
