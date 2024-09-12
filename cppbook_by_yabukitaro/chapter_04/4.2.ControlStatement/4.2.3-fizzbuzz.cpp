#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        
        if (!(i % 3) && !(i % 5)) {
            cout << "fizz-buzz " << i << endl;
        }
        else if (!(i % 3)) {
            cout << "fuzz " << i << endl;
        }
        else if (!(i % 5)) {
            cout << "buzz " << i << endl;
        }
        else 
            cout << i << endl;
    }
}
