#include <iostream>

using namespace std;

int main() {
    const int n = 5;
    
    switch (n % 3) {
        case 0:
            cout << "n is divisible by 3." << endl;
            break;
        
        case 1:
            cout << "n is not divisible by 3 with a remainder of 1." << endl;
            break;
        
        case 2:
            cout << "n is not divisible by 3 with a remainder of 2." << endl;
            break;
       
        default:
            cout << "check input." << endl;
            break;
    }
}
