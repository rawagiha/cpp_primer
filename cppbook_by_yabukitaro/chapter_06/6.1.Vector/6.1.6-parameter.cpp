#include <iostream>
#include <vector>

using namespace std;

void g1(vector<int>& v)
{
    v[0] = 98;
}

auto h()
{
    vector<int> v{ 11, 13, 17, 19 };
    return v;
}

int main()
{
    vector<int> v1{ 2, 3, 5, 7 };

    g1(v1);
    for (const auto x : v1) {
        cout << x << ", ";
    }
    cout << endl;

    auto v2(h());
    for (const auto x : v2) {
        cout << x << ", ";
    }
    cout << endl;
}
