#include <iostream>
#include <vector>
#include <string>


void parse_str(const std::string& str, std::vector<std::string>& vec)
{
    //https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c

    const std::string delim = " ";
    const size_t delim_sz = delim.size(); 

    size_t start = 0;
    for (size_t found = str.find(delim); found != std::string::npos; found = str.find(delim, start))
    {
        vec.emplace_back(str.begin() + start, str.begin() + found);
        start = found + delim_sz;
    }

    if (start != str.size())
        vec.emplace_back(str.begin() + start, str.end());
}


int main()
{
    std::vector<std::string> words;
    
    std::string text;
    std::getline(std::cin, text);
    
    parse_str(text, words);

    if (words.empty())
    {
        std::cout << "no input words " << std::endl;
        return 0;
    }
    
    auto curr_search = words.begin(), search_end = words.end();
    
    unsigned rep_cnt = 1, tmp_rep = 1;
    std::string rep_word = *curr_search, curr_word;
    while(curr_search != search_end)
    {
        curr_word = *curr_search;
        
        tmp_rep = 1;
        while (curr_search + 1 != search_end && curr_word == *(curr_search + 1))
        {
            ++tmp_rep;
            ++curr_search;    
        }
        
        if (tmp_rep > rep_cnt)
        {
            rep_cnt = tmp_rep;
            rep_word = curr_word;
        }
        
        ++curr_search;
    }

    std::cout << rep_cnt << " " << rep_word << std::endl;
}
