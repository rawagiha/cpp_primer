#include <string>
#include <iostream>
#include <map>

int main()
{
    std::multimap<std::string, std::string> species_location;
    
    species_location.insert({"E.thsug", "Arizona"});
    species_location.insert({"R.hgyio", "Wisconsin"});
    species_location.insert({"R.ughty", "Wyoming"});
    species_location.insert({"E.thsug", "New Mexico"});
    
    for (auto it = species_location.cbegin(); it != species_location.cend(); ++it)
    {
        std::cout << it->first << " " << it->second << std::endl;
    }
}
