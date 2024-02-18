#include <map>
#include <string>
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    std::map<std::string, size_t> word_cnt = {{"this", 4}, {"is", 2}, {"a", 1}};

    std::pair<std::map<std::string, size_t>::iterator, bool> ret = word_cnt.insert({"pen", 3});

    std::cout << (ret.first)->first << " " << (ret.first)->second << " " << ret.second << std::endl;

    ret = word_cnt.insert({"this", 3});

    std::cout << (ret.first)->first << " " << (ret.first)->second << " " << ret.second << std::endl;

    ret = word_cnt.insert({"is", 1});

    std::cout << (ret.first)->first << " " << (ret.first)->second << " " << ret.second << std::endl;
}
