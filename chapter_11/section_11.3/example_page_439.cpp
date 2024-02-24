#include <map>
#include <string>
#include <iostream>

int main()
{
    std::multimap<std::string, std::string> authors = {
        {"ms.aho", "this is a pen"}, {"mr.boke", "I is good"}, {"ms.aho", "good, gooder, goodest"},
        {"mr.boke", "he are don't me"}, {"ms.aho", "I are a person"}};

    std::string search_item("mr.boke");
    for (auto beg = authors.lower_bound(search_item),
              end = authors.upper_bound(search_item);
         beg != end; ++beg)
    {
        std::cout << beg->second << std::endl;
    }
}
