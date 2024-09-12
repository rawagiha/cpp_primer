#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    for (unsigned int i = 0; i < argc; ++i) {
        cout << "argv[" << i << "] " << argv[i] << endl;
    }

    cout << "# of args: " << argc << endl;

    if (2 <= argc) return 0;
    else return 1;
}
