#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char  cstr[] = "hello";
    cstr[0] = 'H';
    cout << cstr << endl;
    size_t size = end(cstr) - begin(cstr);
    cout << size << endl;
    cout << strlen(cstr) << endl;
}


