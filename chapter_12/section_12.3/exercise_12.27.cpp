#include "exercise_12.27.h"
#include <sstream>
#include <algorithm>


TextQuery::TextQuery(std::ifstream& ifs) : file(new std::vector<std::string>)
{
    std::string text;
    while (std::getline(is, text)
    {
        file->push_back(text);
        int n = file->size() - 1;
        std::istringstream line(text);
        std::string word;
        while (line >> word)
        {
            auto& lines = wm[word] //lines is a shared_ptr
            if (!lines)
                lines.reset(new std::set<line_no>);
            line->insert(n);
        }
    }
}
