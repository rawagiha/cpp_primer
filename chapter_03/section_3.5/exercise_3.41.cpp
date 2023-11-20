#include <iostream>
#include <vector>

int main()
{
    int int_arr[] = {9, 8, 7, 6, 5, 4, 3};

    std::vector<int> vec(std::begin(int_arr), std::end(int_arr));

    for (auto& i : vec)
        std::cout << i << std::endl;
}
