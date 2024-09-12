/*
  use -c option for separate compilation
  g++ -c xxx.cpp 
*/

#include "arithmetic.h"
#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int y = 10;

    cout << add(x, y) << endl;
    cout << subtract(x, y) << endl;
}
