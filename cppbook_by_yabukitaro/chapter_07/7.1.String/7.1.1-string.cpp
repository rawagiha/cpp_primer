#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "abc";
    string str2;
    cout << str1 << endl;

    str2 = str1;
    string str3 = str2 + "_def";
    cout << str3 << endl;

    str2 = "_ghi";
    str3 += str2;
    cout << str3 << endl;
}
