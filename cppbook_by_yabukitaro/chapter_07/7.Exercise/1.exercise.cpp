#include <iostream>
#include <string>

using namespace std;

void reverse(string& str) {
    size_t len = str.size();

    for (size_t i = 0, j = len - 1; i < j ; ++i, --j) {
        char tmp_str = str[i];
        str[i] = str[j];
        str[j] = tmp_str;
    }  
} 

int main() {
    string s1 = "THis iS fort LaUderDaLE";

    reverse(s1);

    cout << s1 << endl;
}
