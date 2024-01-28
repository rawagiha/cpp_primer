#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    std::istream_iterator<int> in_iter(std::cin);
    std::istream_iterator<int> eof;
    
    std::vector<int> vec;
    while (in_iter != eof)
        vec.push_back(*in_iter++);
    
    for (auto it = vec.cbegin(); it != vec.cend(); ++it)
        std::cout << *it << std::endl;
}
