#include <iostream>

using namespace std;

void show(const int* arr, size_t n) {
    for (size_t i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void show_2(int* first, int* last) {
    for (int* p = first; p != last; p++) {
        cout << *p << ", ";
    }
    cout << endl; 
}

int main() {
    const size_t n = 5;

    //array in heap
    int* a = new int[n] { 6, 7, 8, 9, 0 };
    
    //array in stack
    int b[n] = { 3, 2, 4, 1, 5 };
    
    // for auto doesn't compile for a
    for (auto i : b) { cout << i << ", "; }
    cout << endl;
    
    show(a, n);
    show(b, n);  
     
    //show_2(begin(a), end(a)); doesn't compile
    show_2(begin(b), end(b));

    delete[] a;
}
