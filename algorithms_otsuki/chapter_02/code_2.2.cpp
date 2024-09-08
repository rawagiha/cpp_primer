#include <iostream>
#include <chrono>

int main()
{
    int n;
    std::cin >> n;
    
    if (!std::cin)
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }
    
    int count = 0;

    auto t1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            ++count;
        }
    }
    auto t2 = std::chrono::high_resolution_clock::now();
    
    auto ms_int = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1);
 
    std::cout << ms_int.count() << " micro seconds" << std::endl;
    
    return 0;
}
