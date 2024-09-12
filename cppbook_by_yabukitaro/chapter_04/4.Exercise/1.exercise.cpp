#include <iostream>

using namespace std;

int main() {
    unsigned int end = 10;

    for (int i = -10; i <= end; i++) {
        cout << i << endl;
    }

    cout << static_cast<unsigned int>(-10) << endl;

    int n = -10;
    cout << (
                n <= end 
                ? 
                "int -10 is smaller than unsigned int 10)" 
                :
                "int -10 is larger than unsigned int 10" 
            ) << endl;

    cout << endl;

    int end2 = 10;
    for (int i = -10; i <= end2; i++) {
        cout << i << endl;
    }
}
