#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

int main(int argc, char *argv[])
{
    if (argc != 2) return -1;
    
    std::ifstream in(argv[1]);
    std::istream_iterator<std::string> str_it(in), eof;
    
    std::vector<std::string> v;
    while(str_it != eof)
    {
        v.push_back(*str_it++);
    }

    for (const auto& elem : v)
        std::cout << elem << std::endl;
}
