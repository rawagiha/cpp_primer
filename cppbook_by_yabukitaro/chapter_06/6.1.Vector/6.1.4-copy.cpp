#include <iostream>
#include <vector>
#include<string>

using namespace std;

template <typename T>
void showElements(T& v)
{
    for (const auto& i : v) {
        cout << i << ", ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1 { 2, 4, 6, 8 };
    auto v2(v1);
    
    v1[1] = 40;

    showElements(v1);
    showElements(v2);
    
    cout << endl;
    vector<string> v3 { "a", "c", "bdef" };
    showElements(v3);
    
    cout << endl;
    int arr[] = { 9, 7, 5 };
    showElements(arr); 
}

