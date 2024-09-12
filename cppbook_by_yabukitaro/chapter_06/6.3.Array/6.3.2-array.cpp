#include <iostream>

using namespace std;

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        a[i] = 2 * i + 1;
    }
    
    for (const auto& i : a) {
        cout << i << ", ";
    }
    cout << endl;

    int b[] = { 2, 9, 4, 6 };
    size_t size = end(b) - begin(b);
    size_t size2 = sizeof(b) / sizeof(int);

    cout << size << ", " << size2 << endl;

    for (const auto& i : b) {
        cout << i << ", ";
    }
    cout << endl;

    for (auto& i : b) {
        i *= i;
    }
    
    for (size_t i = 0; i < size; i++) {
        cout << b[i] << ", ";
    }
    cout << endl;
}
