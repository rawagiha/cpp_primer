#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
int binarySearch(vector<T> v, const T target) {
    sort(v.begin(), v.end());

    auto begin = v.cbegin();
    auto end = v.cend();
    
    auto pos = lower_bound(begin, end, target);

    if (pos == end || *pos != target) return -1;
    else {
        return static_cast<int> (pos - begin);
    }
}


int main() {
    vector<int> v1 = {503, 87, 512, 61, 908, 170, 897, 275, 200, 426};
    vector<double> v2 = {0.3, -2, 0.082, 0.3, 3,.4, -2.1};

    cout << binarySearch(v1, 170) << endl;
    cout << binarySearch(v1, 500) << endl;
    cout << binarySearch(v2, -2.1) << endl;
    cout << binarySearch(v2, 1.7) << endl;
}

