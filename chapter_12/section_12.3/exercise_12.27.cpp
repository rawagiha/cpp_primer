#include "exercise_12.27.h"
#include <sstream>
#include <algorithm>


TextQuery::TextQuery(std::ifstream &ifs) : input(new vector<string>)
{
    LineNo lineNo{ 0 };
    for (string line; std::getline(ifs, line); ++lineNo) {
        input->push_back(line);
        std::istringstream line_stream(line);
        for (string text, word; line_stream >> text; word.clear()) {
            // avoid read a word followed by punctuation(such as: word, )
            std::remove_copy_if(text.begin(), text.end(), std::back_inserter(word), ispunct);
            // use reference avoid count of shared_ptr add.
            auto &nos = result[word];
            if (!nos) nos.reset(new std::set<LineNo>);
            nos->insert(lineNo);
        }
    }
}
