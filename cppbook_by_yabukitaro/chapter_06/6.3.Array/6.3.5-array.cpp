#include <iostream>
#include <memory>

using namespace std;

int* f() {
    int a[] = { 2, 3, 5, 7 };

    return a;
    // a is destroyed here 
}

auto g() {
    int* a = new int[4] { 2, 3, 5, 7};
    return a;
}

auto h() {
    unique_ptr<int[]> a(new int[4] { 5, 6, 9, 1 });
    return a;
}

int main() {
    int* x  = f();
    
    if (x == NULL) {
        cout << "x is a null pointer" << endl;
    }

    auto y = g();
    for (size_t i = 0; i < 4; i++) {
        cout << y[i] << ", ";
    }
    cout << endl;
    delete[] y;

    auto z = h();
    for (size_t i = 0; i < 4; i++) {
        cout << y[i] << ", ";
    }
    cout << endl;
}
