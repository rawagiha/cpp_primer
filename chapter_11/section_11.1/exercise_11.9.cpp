#include <list>
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char* argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "Failed to open " << argv[1] << std::endl;
        return -1;
    }
    
    std::map<std::string, std::list<std::size_t>> m;
    
    std::size_t line_n = 1;

    std::string line;
    while (std::getline(in, line))
    {
        std::string word;
        std::stringstream ss(line);
        while (std::getline(ss, word, ' '))
        {
            if (m.find(word) == m.end())
            {
                m[word] = { line_n };
            }
            else
            {
                m[word].push_back(line_n);
            }
        }
        
        ++line_n;
    }
    
    for (const auto& _ : m)
    {
        std::cout << _.first << " occurs in lines: "; 
        for (const auto elem : _.second)
            std::cout << elem << ", ";
        std::cout << std::endl;
    }    
}
