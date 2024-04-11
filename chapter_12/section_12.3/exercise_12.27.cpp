#include "exercise_12.27.h"
#include <sstream>
#include <algorithm>
#include <iostream>
#include <memory>
#include <fstream>

TextQuery::TextQuery(std::ifstream& ifs) : file(new std::vector<std::string>)
{
    std::string text;
    while (std::getline(ifs, text))
    {
        file->push_back(text);
        int n = file->size() - 1;
        std::istringstream line(text);
        std::string word;
        while (line >> word)
        {
            auto& lines = wm[word]; //lines is a shared_ptr
            if (!lines)
                lines.reset(new std::set<line_no>);
            lines->insert(n);
        }
    }
}

class QueryResult
{
friend std::ostream& print(std::ostream&, const QueryResult&);
using line_no = std::vector<std::string>::size_type;
public:
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
        sought(s), lines(p), file(f) {  }
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};

QueryResult
TextQuery::query(const std::string& sought) const
{
    static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);

    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file);
    else
        return QueryResult(sought, loc->second, file);
}

std::ostream& print(std::ostream& os, const QueryResult& qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " times" << std::endl;

    for (auto num : *qr.lines)
        os << "\t(line " << num + 1 << ") "
           << *(qr.file->begin() + num) << std::endl;
    return os;
} 

void run(const std::string& filename)
{
    std::ifstream ifs{filename};
    TextQuery tq{ifs};
    while (true)
    {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;

        if (!(std::cin >> s) || s == "q") break;
        
        print(std::cout, tq.query(s)) << std::endl;
    }
}

int main(int argc, char* argv[])
{
    if (argc < 2) 
    {
        std::cout << "wrong input" << std::endl;
        return 1;
    }
    else
    {
        run(argv[1]);
    }

    return 0;
}
