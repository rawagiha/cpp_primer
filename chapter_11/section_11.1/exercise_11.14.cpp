#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

typedef std::pair<std::string, int> kid_data;

void add_new_family(
    std::map<std::string, std::vector<kid_data>>& family_data,
    const std::string& family_name, 
    const std::vector<kid_data>& kids
)
{
    family_data[family_name] = kids;
} 

void add_kids(
    std::map<std::string, std::vector<kid_data>>& family_data,
    const std::string& family_name,
    const std::vector<kid_data>& kids
)
{
    if (family_data.find(family_name) == family_data.end())
    {
        std::cout << "No such family: " << family_name << std::endl;
        return;
    }
    
    for (const auto& kid : kids)
    {
        family_data[family_name].push_back(kid);
    }
}

int main()
{
    
    std::map<std::string, std::vector<kid_data>> family_data = { {"family_a", {{"kid_a", 4}, {"kid_b", 2}}} };
    
    std::vector<kid_data> kids = {{"kid_c", 12}, {"kid_d", 3}};

    add_kids(family_data, "family_a", kids);

    std::vector<kid_data> children = {{"child_a", 10}, {"child_b", 8}};
    add_new_family(family_data, "family_b", children);

    for (const auto& elem : family_data["family_a"])
        std::cout << elem.first << " " << elem.second << std::endl;
    std::cout << std::endl;

    for (const auto& elem : family_data["family_b"])
         std::cout << elem.first << " " << elem.second << std::endl;
    std::cout << std::endl;
    
    add_kids(family_data, "family_A", kids);
}
