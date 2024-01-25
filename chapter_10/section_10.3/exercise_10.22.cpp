#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>

void elim_dups(std::vector<std::string>& words)
{
    std::sort(words.begin(), words.end());
    auto end_uniq = std::unique(words.begin(), words.end());
    words.erase(end_uniq, words.end());
}

std::string make_plural(size_t cnt, std::string word, const std::string& suffix)
{
    if (cnt > 1)
    {
        return word + suffix;
    }
    else
    {
        return word;
    }
}

bool shorter_than(const std::string& s, std::string::size_type sz)
{
    return s.size() <= sz;
} 

void biggies(std::vector<std::string>& words,
             std::vector<std::string>::size_type sz)
{
    elim_dups(words);
    std::stable_sort(words.begin(), words.end(),
                     [](const std::string& a, const std::string& b)
                       { return a.size() < b.size(); });
    
    auto cnt = std::count_if(words.begin(), words.end(),
                             std::bind(shorter_than, std::placeholders::_1, sz));
    
    std::cout << cnt << " " << make_plural(cnt, "word", "s")
              << " of length " << sz << " or shorter" << std::endl;
    
    
    auto wc = std::find_if(words.begin(), words.end(),
                           [sz](const std::string& a)
                           { return a.size() > sz; });
    std::for_each(wc, words.end(),
                  [](const std::string& s) { std::cout << s << " "; });
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> v{"this", "parameter", "is", "not", "an", "namespace", "but", "pencil-like-pen"};
    biggies(v, 6);
}
