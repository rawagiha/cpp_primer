#include <iostream>

using namespace std;

int main() {
    cout << (1 < 2 && 2 < 3) << endl;
    cout << (1 < 2 && 99 < -2) << endl;
    cout << (1 < 2 || 99 < -2) << endl;
    cout << (!(5 < 1)) << endl;

    cout << (!(0)) << endl;
    cout << (!(10)) << endl;

    cout << (1 < 2 && 0) << endl;
    cout << (0 || 85) << endl;
}
