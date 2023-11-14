#include <vector>
#include <string>
#include <iostream>

template <typename T>
void show_elems(const std::vector<T>& vec)
{   
    int i = 0;
    for (const auto& elem : vec)
    {
        std::cout << elem << std::endl;
        ++i;
    }

    std::cout << "this vector has " << i << " elements" << std::endl;
}


int main()
{
    std::vector<int> v1;  
    show_elems(v1);

    std::vector<int> v2(10);
    show_elems(v2);

    std::vector<int> v3(10, 42);
    show_elems(v3);

    std::vector<int> v4{10};
    show_elems(v4);

    std::vector<int> v5{10, 42};
    show_elems(v5);

    std::vector<std::string> v6{10};
    show_elems(v6);

    std::vector<std::string> v7{10, "hi"};
    show_elems(v7);
}
