#include <iostream>

using namespace std;

int main () {
    cout << "\"(^_^)\"" << endl;

    // raw string literal format  R"delimiter(raw str)delimiter" 
    // the raw string may not contain the delimiter 
    cout << R"*("(^_^)")*" << endl;
}
