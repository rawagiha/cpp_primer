#include <iostream>
#include <string>

template <typename T, unsigned N>
T* my_begin(T (&arr)[N])
{
    //const T* p = arr;
    return arr;
}

template <typename T, unsigned N>
T* my_end(T (&arr)[N])
{
    T* p = arr;
    return p + N;
}


int main()
{
    int ia[] = { 0, 2 ,4, 5 };
    std::cout << my_begin(ia) << " " << std::begin(ia) << std::endl;
    std::cout << my_end(ia) << " " << std::end(ia) << std::endl;

    const char ib[] = { 't', 'h', 'I', 'S', 'a', 'P', 'e', 'N' };
    std::cout << my_begin(ib) << " " << std::begin(ib) << std::endl;
    std::cout << *my_begin(ib) << std::endl;
    std::cout << my_end(ib) << " " << std::end(ib) << std::endl;
    std::cout << *(my_end(ib) - 3) << std::endl;

    std::string s[] = { "this", "is", "a", "pen" };
    std::cout << my_begin(s) << " " << std::begin(s) << std::endl;
    std::cout << my_end(s) << " " << std::end(s) << std::endl;
}

