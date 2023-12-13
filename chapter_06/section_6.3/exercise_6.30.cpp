#include <iostream>
#include <string>

bool str_subrange(const std::string& str1, const std::string& str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;
    
    auto size = str1.size() < str2.size() 
                ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i])
            return false; //wrong
            //error: return-statement with no value, in function returning ‘bool’
    }

    //warning: control reaches end of non-void function ;
    
    return true;
}

int main()
{
    std::string str1, str2;
    std::cin >> str1 >> str2;

    std::cout << str_subrange(str1, str2) << std::endl;
}
