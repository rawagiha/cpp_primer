#include <iostream>
#include <vector>
#include <string>
#include <cctype>

void to_upper(std::string& str)
{
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        *it = std::toupper(*it);
    }
}


int main()
{
    std::vector<std::string> text = {"I found a pen.", 
                                     "At first, I thought it was a cat.",
                                     "However, my frineds corrected me. It was a pen.",
                                     "Yes, this is a pen. A pen. A pen.",
                                     "",
                                     "I still think it is a real cat, not a pen"};
   
    for (auto it = text.begin(); it != text.end() && !(*it).empty(); ++it)
    {
        to_upper(*it);

    }

    for (auto it = text.cbegin(); it != text.cend(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
