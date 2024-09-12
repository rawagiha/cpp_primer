#include <iostream>

using namespace std;

void mySwap(int* p1, int* p2) {
    int tmp = (*p1);
    (*p1) = (*p2);
    (*p2) = tmp;
}

int main() {
    int x = 1;
    int y = 2;

    mySwap(&x, &y);

    cout << "x = " << x << ", y = " << y << endl;
}
