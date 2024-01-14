#include <string>
#include <iostream>

void f1(std::string& s, const std::string& old_val, const std::string& new_val)
{
    std::string::size_type i = 0;
    const std::string::size_type sz = old_val.size();
    while (i <= s.size() - sz + 1)
    {
        if (s.substr(i, sz) == old_val)
        {
            s.replace(i, sz, new_val);
            i += new_val.size();
        }
        else
        {
            ++i;
        }        
    }    
}

int main()
{
    std::string s = "this is valid thru may 1 to june 7 thru through a. thru";

    f1(s, "thru", "through");
    std::cout << s << std::endl;
}
