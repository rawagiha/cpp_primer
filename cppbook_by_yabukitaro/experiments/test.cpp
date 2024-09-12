#include <iostream>

using namespace std;

template <typename  T, typename U>
U calc(T x, U y) {
      return (x + y);
}

int main() {
    int a = 3;
    double b = 0.333;
    cout << calc(a, b) << endl;

    double c = 0.999;
    int d = 1;
    cout << calc(c, d) << endl;
}
