#include <iostream>

using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }
    
    cout << endl; 
    
    i = 0;
    while(i++ < 5) {  // when i = 4, eval as 4 and process as 5
        cout << i << endl;
    }
   
    cout << endl;

    i = 0;
    while(++i < 5) { // when i = 4, eval as 5 and terminate
        cout << i << endl;
    }
}
