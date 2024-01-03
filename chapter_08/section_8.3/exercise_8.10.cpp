#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


int main(int argc, char *argv[])
{
    std::ifstream input(argv[1]);

    std::vector<std::string> vec;
    std::string buf, word;
    if (input)
    {
        while(std::getline(input, buf))
        {
            std::istringstream fetched_line(buf);
            while(fetched_line >> word)
            {
                vec.push_back(word);
            }
        }

        for (const auto& elem : vec)
            std::cout << elem << std::endl;
    }
    else
    {
        std::cerr << "Can't read the input file\n";
    }
}
