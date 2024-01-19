#include <iostream>
#include <vector>

void add_vec_sz(std::vector<int>& vec)
{
    auto sz = vec.size();
    auto f = [sz] (const int a) { return a + sz; };

    for (auto& elem : vec)
        elem = f(elem);
}

int main()
{
    std::vector<int> vec{5, 2, 4, 1, 6, 7, 8};
    
    add_vec_sz(vec);    
    
    for (const int elem : vec)
        std::cout << elem << std::endl;

}
