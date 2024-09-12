#include <iostream>

using namespace std;

int main() {
    int n = 4;
    //int n = 5;
    
    if (n % 2) {
        cout << "n is odd." << endl;
    }
    else
        cout << "n is even." << endl;

   int m = 9; 
   if ((m % 2) && !(m % 3)) {
       cout << "m is odd and divisible by 3." << endl;
   }

   int k = 35;
   if (k % 2) {
       if (!(k % 3))
           cout << "k is odd and divisible by 3." << endl;
       else if (!(k % 5))
           cout << "k is odd and divisible by 5 but not by 3." << endl;
       else 
           cout << "k is odd and not divisible by 3 or 5." << endl;
   }
   else
       cout << "k is even." << endl;

  //use block {} to prevent unintended behavior
  int x = 9;
  if (!(x % 3))
      if (!(x % 2))
          cout << "x is even and divisible by 3." << endl;
  else
      cout << "x is not divisible by 3." << endl;

  // with block
  if (!(x % 3)) {
      if (!(x % 2))
          cout << "x is even and divisible by 3." << endl;
  }
  else
      cout << "x is not divisible by 3." << endl;
}
