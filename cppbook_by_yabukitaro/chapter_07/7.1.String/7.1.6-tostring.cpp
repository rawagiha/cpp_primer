#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 2345;
    string str1 = to_string(x);
    cout << str1.size() << endl;

    double y = 3.14567;
    string str2 = to_string(y);
    cout << str2 << endl;

    string str3 = "2.45314";
    double z = stod(str3);
    cout << z + 1.03 << endl;
}
