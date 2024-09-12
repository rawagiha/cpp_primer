#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    double c = 0.1;
    double d = 0.2;
    string e = "abc";
    string f = "def";

    swap(a, b);
    swap(c, d);
    swap(e, f);

    cout << "a = " << a << ", b = " << b << endl;
    cout << "c = " << c << ", d = " << d << endl;
    cout << "e = " << e << ", f = " << f << endl;
}
