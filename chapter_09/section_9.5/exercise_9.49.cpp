#include <string>
#include <iostream>
#include <fstream>

bool has_letters(const std::string& query, const std::string& letters)
{
    return (query.find_first_of(letters) != std::string::npos); 
}

int main(int argc, char *argv[])
{
    const std::string ascenders("bdfhkl"), descenders("gjpqy");
    std::ifstream input(argv[1]);
    
    std::string word;
    if (input)
    {
        std::string tmp_word;
        while (input >> tmp_word)
        {
            if (!has_letters(tmp_word, ascenders) && !has_letters(tmp_word, descenders))
            {
                if (word.size() < tmp_word.size())
                {
                    word = tmp_word;
                }
            }   
        }    
    }
    else
    {
        std::cout << "failed to open " << argv[1] << std::endl;
        return -1;
    }
    
    std::cout << word << std::endl;  
    
    return 0;
}
