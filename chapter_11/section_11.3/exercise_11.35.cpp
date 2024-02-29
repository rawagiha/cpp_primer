#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

std::map<std::string, std::string> build_map(std::ifstream& map_file)
{
    std::map<std::string, std::string> trans_map;

    std::string key;
    std::string value;
    
    // read the first word into key and the rest into value
    while(map_file >> key && std::getline(map_file, value))
    {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            try
            {
                throw std::runtime_error("no rule for " + key);
            }
            catch(std::runtime_error f)
            {
                /**/
            }
    }

    return trans_map;
}

const std::string& 
_transform(const std::string& s, std::map<std::string, std::string>& m)
{
    const std::string& value = m[s];

    if (!value.empty())
        return value;
    else
        m.erase(s);
        return s;
}

void word_transform(std::ifstream& map_file, std::ifstream& input)
{
    auto trans_map = build_map(map_file);

    std::string text;
    while (std::getline(input, text))
    {
        std::istringstream stream(text);
        
        std::string word;
        bool is_first = false;
        while (stream >> word)
        {
            if (is_first)
                is_first = false;
            else
                std::cout << " ";
            
            std::cout << _transform(word, trans_map);
        }
        std::cout << std::endl;
    }
}

int main(int argc, char* argv[])
{
    std::ifstream map_file(argv[1]);
    std::ifstream input(argv[2]);
    word_transform(map_file, input);
}
