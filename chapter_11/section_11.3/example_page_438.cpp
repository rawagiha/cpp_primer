#include <map>
#include <string>
#include <iostream>

int main()
{
    std::multimap<std::string, std::string> authors = {
        {"ms.aho", "this is a pen"}, {"mr.boke", "I is good"}, {"ms.aho", "good, gooder, goodest"},
        {"mr.boke", "he are don't me"}, {"ms.aho", "I are a person"}};

    std::string search_item("ms.aho");
    auto entries = authors.count(search_item);
    auto iter = authors.find(search_item);
    while (entries)
    {
        std::cout << iter->second << std::endl;
        ++iter;
        --entries;
    }
}
