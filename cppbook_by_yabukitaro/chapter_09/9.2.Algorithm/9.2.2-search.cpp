#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getIndex(vector<int> v, int target) {
    
    auto begin = v.cbegin();
    auto end = v.cend();
    auto pos = find(begin, end, target);
    
    if (pos == end) return -1;
    else {
        int idx = pos - begin;
        return idx;
    }
}


int main() {
    vector<int> v{2, 3, 5, 1, 4};

    cout << getIndex(v, 1) << endl;
    cout << getIndex(v, 9) << endl;
}
