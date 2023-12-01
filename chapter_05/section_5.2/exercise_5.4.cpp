#include <iostream>
#include <string>

std::string key_words = "pen this is";

bool find(std::string& word)
{
    return key_words.find(word) != std::string::npos;
}

int main()
{
    std::string s = "this is not a pen";
    std::string::iterator iter = s.begin();
    //while (std::string::iterator iter != s.end()) iter not initialized
    while(iter != s.end())
    {
        std::cout << *iter << std::endl;
        ++iter;
    }
    
    std::string word;
    std::cin >> word;
    
   
    bool status;
    //while (bool status = find(word)) -> only inside the while {}
    while (status = find(word))
    {
        std::cout << "try a different word" << std::endl;
        std::cin >> word;      
    }

    if (!status)
    {
        std::cout << "it is not a keyword" << std::endl;
    }
}

