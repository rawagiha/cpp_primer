#include <iostream>
using namespace std;

void report(const char* cstr) {
    for (unsigned int i = 0; cstr[i] != '\0'; ++i) {
        cout << '[' << i << "]: " << cstr[i] << endl;
    }    
}

int main() {
    char cstr[] = "Hello Fort Lauderdale";
    report(cstr);
}
