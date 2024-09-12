#include <iostream>

using namespace std;

int main() {
    cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";
    cout << "-|--------------------------------\n";

    char ch = 0x20;
    int i = 0;
    while (i < 102) {
        if (!(i % 17)) {
            cout << (i / 17 + 2) << '|';
        } 
        else if(i % 17 == 16) {
            cout << ' ' << ch++ << endl;
        }
        else
            cout << ' ' << ch++;

        i++;
    }

}
