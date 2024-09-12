//need -std=c++11 or higher to compile
#include <iostream>

using namespace std;

int main() {
    enum class choice {rock, sissors, paper};

    choice x = choice::rock;
    choice y = choice::sissors;

    cout << (x == y) << endl;
}
