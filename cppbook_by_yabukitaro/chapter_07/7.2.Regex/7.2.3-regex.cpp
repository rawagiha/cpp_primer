#include <iostream>
#include <regex>

using namespace std;

regex rx(R"(\d{3}-\d{2,6})");
regex rx2(R"((\d{3})-(\d{2,6}))");
int main() {
    string str = "my zip is 132-345. not 345-13214.";
    string tmp = "XXX-XXXX";
    string tmp2 = "";
    tmp2 = regex_replace(str, rx, tmp);
    cout << tmp2 << endl;
    
    string tmp3 = "$2";
    string tmp4 = "";
    tmp4 = regex_replace(str, rx2, tmp3);
    cout << tmp4 << endl;
}
