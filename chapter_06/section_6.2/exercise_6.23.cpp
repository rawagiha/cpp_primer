#include <iostream>
#include <iterator>
#include <string>

void print(const int* x)
{
    std::cout << "can take int or array. But only show the first elem" << std::endl;
    std::cout << *x << std::endl;
}

void print(const int *beg, const int *end)
{
    std::cout << "iterator version" << std::endl;
    while (beg != end)
        std::cout << *beg++ << std::endl;
}

void print(const int ia[], size_t sz)
{
    std::cout << "array and its size version" << std::endl;
    for (size_t i = 0; i != sz; ++i)
    {
        std::cout << ia[i] << std::endl;
    }
}

void print(const int (&arr)[2], std::string s)
{
    //string s to differentiate from the first version
    
    std::cout << s << std::endl;
    for (auto elem : arr)
    {
        std::cout << elem << std::endl;
    }
}

int main()
{
    int i = 0;
    int j[2] = {3, 4};
    print(&i);
    print(j);

    print(std::begin(j), std::end(j));

    print(j, 2);

    print(j, "pass by ref version");
}
