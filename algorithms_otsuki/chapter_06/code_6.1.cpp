#include <iostream>
#include <vector>
#include <algorithm>

void show(const std::vector<int>& v)
{
    for (auto e : v)
        std::cout << e << ", ";
    std::cout << std::endl;
}

int binary_search(int key, const std::vector<int>& a) 
{
    int left = 0, right = a.size() - 1;
    
    while (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] > key) right = mid - 1;
        else if (a[mid] < key) left = mid + 1;
    }

    return -1;
}


int main()
{
    std::vector<int> a = {5, 3, 17, 4, 8, 39, 21, 10};
    std::sort(a.begin(), a.end());
 
    int key = -999;
    std::cin >> key;
   
    if (!std::cin) return 1;
    std::cout << binary_search(key, a) << std::endl;
}
