#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>


struct PersonInfo
{
    std::string name;
    std::vector<std::string> phones;
};

int main()
{
    std::string line, word;
    std::vector<PersonInfo> people;
    
    std::istringstream record;
    
    std::ifstream inputfile("customers.txt");
    
    if (!inputfile)
    {
        std::cerr << " Can't open input file\n";
        return -1;
    }

    while (std::getline(inputfile, line))
    {
        PersonInfo info;
        
        record.clear();
        record.str(line);
        
        record >> info.name;
        while (record >> word)
        {
            info.phones.push_back(word);
        }

        people.push_back(info);

        //record.clear();
        //record.str("");
    }

    for (const auto& elem : people)
    {
        std::cout << "customer name/phones: " << elem.name << " / ";
        for (const auto& phone : elem.phones)
        {
            std::cout << phone << ", ";
        }
        std::cout << std::endl;
    }

}
