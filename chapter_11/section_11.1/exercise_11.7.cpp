#include <iostream>
#include <vector>
#include <string>
#include <map>

void add_new_family(
    std::map<std::string, std::vector<std::string>>& family_data,
    const std::string& family_name, 
    const std::vector<std::string>& kids
)
{
    family_data[family_name] = kids;
} 

void add_kids(
    std::map<std::string, std::vector<std::string>>& family_data,
    const std::string& family_name,
    const std::vector<std::string>& kids
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
    
    std::map<std::string, std::vector<std::string>> family_data = { {"family_a", {"kid_a", "kid_b"}} };
    
    std::vector<std::string> kids = {"kid_c", "kid_d"};

    add_kids(family_data, "family_a", kids);

    std::vector<std::string> children = {"child_a", "child_b"};
    add_new_family(family_data, "family_b", children);

    for (const auto& elem : family_data["family_a"])
        std::cout << elem << std::endl;
    std::cout << std::endl;

    for (const auto& elem : family_data["family_b"])
         std::cout << elem << std::endl;
    std::cout << std::endl;
    
    add_kids(family_data, "family_A", kids);
}
