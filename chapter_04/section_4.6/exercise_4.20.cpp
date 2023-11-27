#include <vector>
#include <iostream>
#include <string>

int main()
{
    std::vector<std::string> vec = {"this", "is", "", "a", "pen."};
    std::vector<std::string>::iterator iter = vec.begin();
    
    //*iter++ is eq. to *(iter++)
    std::cout << *(iter++) << std::endl;
    
    //(*iter)++ illegal. string has no such op
    
    //*iter.empty() illegal ptr has no empty method
    std::cout << (*iter).empty() << std::endl;
    
    ++iter;
    std::cout << iter->empty() << std::endl;
    
    //++*iter illegal 
    if (iter + 1 != vec.end())
    {
        std::cout << *(++iter) << std::endl;
    }
    
    if (iter != vec.end())
    {
        std::cout << *iter << std::endl;
        std::cout <<iter++->empty() << std::endl;

        if (iter != vec.end())
        {
            std::cout << *iter << std::endl;
        }
    }
}
