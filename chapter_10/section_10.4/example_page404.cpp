#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
#include <limits>

int main()
{
    std::istream_iterator<int> in_iter(std::cin);
    std::istream_iterator<int> eof;
    
    std::cout << std::accumulate(in_iter, eof, 0) << std::endl;    

    std::cout << std::cin.good() << " " << std::cin.eof() << std::endl;
    std::cin.clear();
    
    //???
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //std::cin.ignore(2, '\n');
    
    std::istream_iterator<int> _in_iter(std::cin);
    std::vector<int> v(_in_iter, eof);

    for (const auto elem : v)
        std::cout << elem << std::endl;
}
