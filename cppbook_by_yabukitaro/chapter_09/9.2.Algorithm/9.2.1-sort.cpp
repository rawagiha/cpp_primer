#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

template <typename T>
void sortShow(T v) {
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i << ", ";
    }
    cout << endl;
}


int main() {
    vector<int> va{4, 2, 1, 5, 3};
    vector<double> vb{-0.2, 0.0, 7.2, -8, -6.2};
    vector<char> vc{'2', 'a', '|', '<', 'd'};
    vector<string> vd{"this", "is", "not", "a", "pen."};
    
    sortShow(va);
    sortShow(vb);
    sortShow(vc);
    sortShow(vd);


    list<string> lst{"you", "are", "always", "wrong."};
    lst.sort();
    for (auto i : lst) {
        cout << i << ", ";
    }
    cout << endl;
} 
