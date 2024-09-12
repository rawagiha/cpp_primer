#include <iostream>

using namespace std;

int main() {
    int x = 0;
    
    x = 5;
    cout << x << endl;

    x = 1.0;
    cout << x << endl;

    int y = 1;
    y = static_cast<int>(3.2); 
    cout << 1 / y << endl;

    double z = 3.9;
    z = int(3); 
    cout << 1 / z << endl;

    int zz = 2;
    zz = int('1');
    cout << zz << endl; // 49

}
