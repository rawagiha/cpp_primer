/* no main, can't compile 
   g++ 5.4.3-file1.cpp -o 5.4.3-file1
     
   For separate compilation (-c option)
   g++ -c 5.4.3-file1.cpp

   -> 5.4.3-file1.o (use this for link)
*/
#include <iostream>

using namespace std;

int x = 10;

void f() {
    cout << "Hello." << endl;
}
