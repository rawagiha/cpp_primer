#ifndef EX12_27_H
#define EX12_27_H

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <fstream>
#include <map>
#include <set>


class QueryResult; //forward decl

class TextQuery {
public:
    using LineNo = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> input;
    std::map<std::string, std::shared_ptr<std::set<LineNo>>> result;
};

#endif
