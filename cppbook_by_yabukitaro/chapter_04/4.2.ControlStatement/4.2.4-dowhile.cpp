#include <iostream>

using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << endl; 
        i++;
    } while (i < 3);


    int j = 5;
    do {
        cout << "the condition is not satisfied." << endl;
        j++;
    } while (j < 0);
}
