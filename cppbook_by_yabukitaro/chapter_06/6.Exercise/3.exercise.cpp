#include <iostream>

using namespace std;

void myReverse(int* first, int* last) {
    while (first < last) {
        --last;
        int tmp = *last;
        *last = *first;
        *first = tmp;
        ++first;
    }
}

int main() {
    int a[] = { 2, 9, 4, 1, 5, 3 };
    myReverse(a, end(a));
    
    for (const auto i : a) {
        cout << i << ", ";
    }
    cout << endl;

    int b[] = { 3 };
    myReverse(b, end(b));

    for (const auto i : b) {
        cout << i << ", ";
    }
    cout << endl;
}
