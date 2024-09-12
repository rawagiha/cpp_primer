#include <iostream>

using namespace std;

int main() {
    cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";
    cout << "-|--------------------------------\n";

    char ch = 0x20;
    for (int i = 2; i <= 7; i++) {
        cout << i << '|';
        for (int j = 0; j < 16; j++) {
            cout << ' ' << ch++;
        }
        cout << endl;
    }
}
