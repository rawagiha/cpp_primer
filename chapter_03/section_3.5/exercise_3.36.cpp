#include <iostream>
#include <vector>
#include <cstddef>

bool is_same(int a[], size_t size_a,  int b[], size_t size_b)
{
    if (size_a != size_b) return false;

    for (size_t i = 0; i < size_a; ++i)
    {
        if (a[i] != b[i]) return false;
    }

    return true;
}

int main()
{
    int ia[] = {0, 1, 2, 3, 4, 5, 6};
    int ia0[] = {0, 1, 2, 3};
    int ia2[] = {0, 1, 2, 3, 4, 5, 6};
    int ia3[] = {0, 1, 2, 3, 5, 5, 6};  

    std::cout << is_same(ia, 7, ia0, 4) << std::endl;
    std::cout << is_same(ia, 7, ia2, 7) << std::endl;
    std::cout << is_same(ia, 7, ia3, 7) << std::endl;

    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6};
    std::vector<int> v0 = {0, 1, 2, 3};
    std::vector<int> v2 = {0, 1, 2, 3, 4, 5, 6};
    std::vector<int> v3 = {0, 1, 2, 3, 5, 5, 6};
    
    std::cout << (v == v0) << std::endl;
    std::cout << (v == v2) << std::endl;
    std::cout << (v == v3) << std::endl; 
}
