#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec(5);
     
    // by index
    vec[2] = 100;
    
    // by at method
    vec.at(1) = 99;
    
    // by pointer
    int* p = &vec[0];
    *p = 98;
    *(p + 3) = 101;

    // by iterator
    auto it = vec.end();
    *(it - 1) = 102;

    for (auto i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ", ";
    }
    cout << endl;
}
