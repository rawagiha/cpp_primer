#include <map>
#include <string>
#include <iostream>

int main()
{
    std::map<std::string, int> m = {{"this", 4}, {"is", 2}};

    auto a = m["this"];
    a = 6;
    std::cout << m["this"] << std::endl;

    auto& b = m["this"];
    b = 6;
    std::cout << m["this"] << std::endl;

    m["this"] = 4;
    std::cout << m["this"] << std::endl;
    
    std::string s = "this is a pen";
    std::string& s_ref = s; 

    auto s_ref_auto = s_ref; // ref is dropped
    auto& s_ref_auto_ref = s_ref; //auto&

    s_ref = "this is not a pen";

    std::cout << s << "     " 
              << s_ref << "     " 
              << s_ref_auto << "        "
              << s_ref_auto_ref << std::endl;

}

