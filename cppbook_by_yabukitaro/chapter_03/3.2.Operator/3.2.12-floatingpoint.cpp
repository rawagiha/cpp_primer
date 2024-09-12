#include <iostream>
#include <iomanip> //setprecision
#include <cmath> //abs

using namespace std;

int main() {
    double x = 0.1;
    double y = x + x + x + x + x + x + x + x + x + x;
    
    cout << y << endl;
    cout << (y == 1.0) << endl;
    cout << setprecision(30);
    cout << y << endl;
    cout << setprecision(6); //default

    cout << (y == 1.0) << endl;
    cout << (int(y) == 1) << endl;

    double e = 0.001;
    cout << (abs(y - 1.0) < e ? "y == 1.0" : "y != 1.0") << endl;

    double z = 9007199254740997;
    cout << setprecision(20);
    double z_plus_one = z + 1;
    cout << "z = " << z << ", z_plus_one = " << z_plus_one << endl;
    cout << (z == z_plus_one ? "z = z + 1" : "z != z + 1") << endl;
} 
