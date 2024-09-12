#include <iostream>

using namespace std;

int main() {
    int x = 3, y = 3;

    cout << ((x++) + 30) << endl;
    cout << ((++y) + 30) << endl;

    cout << x << endl;
    cout << y << endl;
}
