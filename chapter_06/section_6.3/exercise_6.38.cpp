#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd)& arrPtr(int i)
{
    return (i % 2) ? odd : even;
}

int main()
{
    int (&arr)[5] = arrPtr(2);
    //auto arr = arrPtr(2); arr a pointer?
    
    std::cout << arr[2] << std::endl;
    arr[2] = 99;

    for (int i = 0; i != 5; ++i)
        std::cout << arr[i] << std::endl;
    
    for (int elem : arr)
        std::cout << elem << std::endl;
}
