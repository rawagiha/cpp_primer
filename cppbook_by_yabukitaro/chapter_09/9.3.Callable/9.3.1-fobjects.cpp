#include "numofdivisors.h"
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool less1(int lhs, int rhs) {
    int lt = numOfDivisors(lhs);
    int rt = numOfDivisors(rhs);

    if (lt == rt) {
        return lhs < rhs;
    }
    else return lt < rt;
}

int main() {
    vector<int> v {7, 9, 5, 4, 6, 11, 3, 2};
    
    sort(v.begin(), v.end(), less1);

    for (auto i : v) cout << i << ", ";
    cout << endl;
}

