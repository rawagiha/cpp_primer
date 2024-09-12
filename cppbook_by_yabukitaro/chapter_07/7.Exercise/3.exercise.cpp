#include <iostream>
#include <regex>

using namespace std;

regex rx(R"(\d+)");

int main() {
    string str = "my phone number is 234-1-3452, and not 876-98732";

    sregex_iterator it(str.begin(), str.end(), rx);
    auto end = sregex_iterator();
    
    while (it != end) {
        cout << (it++)->str() << endl;
    }
}
