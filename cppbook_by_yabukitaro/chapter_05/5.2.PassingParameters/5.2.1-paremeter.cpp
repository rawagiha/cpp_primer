#include <iostream>

using namespace std;

void f1(int x) {
    cout << ++x << endl;
}

void f2(const int x) {
    cout << x + 1 << endl;
}

void f3(int& x) {
    cout << ++x << endl;
}

void f4(const int& x) {
    cout << x + 1 << endl;
}

void f5(int&& x) {
    cout << ++x << endl;
}

void f6(const int&& x) {
    cout << x + 1 << endl;
}

void f7(int* p) {
    cout << ++(*p) << endl;
}

void f8(const int* p) {
    cout << (*p) + 1 << endl;
}

int main() {
   int x;
   
   cout << "pass by int\n";
   x = 9;
   cout << "f1(9) = ";
   f1(9);
   cout << "f1(x) = ";
   f1(x);
   cout << "x = " << x << endl;
   
   cout << "\n";
   cout << "pass by const int\n";  
   x = 9;
   cout << "f2(9) = ";
   f2(9);
   cout << "f2(x) = ";
   f2(x);
   cout << "x = " << x << endl;
   
   cout << "\n";
   cout << "pass by int&\n";
   x = 9;
   //f3(9);
   cout << "f3(9) doesn't compile" << endl;
   cout << "f3(x) = ";
   f3(x);
   cout << "x = " << x << endl;
   
   cout << "\n";
   cout << "pass by const int&\n";
   x = 9;
   cout << "f4(9) = ";
   f4(9);
   cout << "f4(x) = ";
   f4(x);
   cout << "x = " << x << endl;

   cout << "\n";
   cout << "pass by int&&\n";
   x = 9;
   cout << "f5(9) = ";
   f5(9);
   cout << "f5(static_cast<int&&>(x)) = ";
   f5(static_cast<int&&>(x));
   cout << "x = " << x << endl;

   cout << "\n";
   cout << "pass by const int&&\n";
   x = 9;
   cout << "f6(9) = ";
   f6(9);
   cout << "f6(static_cast<int&&>(x)) = ";
   f6(static_cast<int&&>(x));
   cout << "x = " << x << endl;

   cout << "\n";
   cout << "pass by int*\n";
   x = 9;
   cout << "f7(&x) = ";
   f7(&x);
   cout << "x = " << x << endl;

   cout << "\n";
   cout << "pass by const int*\n";
   x = 9;
   cout << "f8(&x) = ";
   f8(&x);
   cout << "x = " << x << endl;
}  

