#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

int main(int argc, char *argv[])
{
    if (argc != 2) return -1;
    
    std::ifstream in(argv[1]);
    std::istream_iterator<std::string> str_it(in), eof;
    
    std::vector<std::string> v;
    std::copy(str_it, eof, std::back_inserter(v));
    
    // output
    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<std::string>(std::cout, "\n"));

}
