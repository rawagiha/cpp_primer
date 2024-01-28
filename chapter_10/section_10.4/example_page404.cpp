#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

int main()
{
    std::istream_iterator<int> in_iter(std::cin);
    std::istream_iterator<int> eof;
    std::cout << std::accumulate(in_iter, eof, 0) << std::endl;    
}
