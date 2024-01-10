#include <iostream>
#include <vector>

int main()
{
    std::vector<int> c = {5};

    //first elem copy
    auto val = *c.begin(), val2 = c.front();
    std::cout << val << " " << val2 << std::endl;
    
    //last elem copy
    auto last = c.end(); // iter last past one
    auto val3 = *(--last);
    auto val4 = c.back();
    std::cout << val3 << " " << val4 << std::endl;

    //last elem ref
    auto& val5 = c.back();
    val5 = 9;

    std::cout << c[0] << std::endl;
}
