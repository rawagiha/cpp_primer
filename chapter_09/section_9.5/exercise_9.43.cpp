#include <string>
#include <iostream>

void f1(std::string& s, const std::string& old_val, const std::string& new_val)
{
    auto it = s.begin();
    const auto sz = old_val.size();
    while (it <= s.end() - sz)
    {
        std::string _s(it, it + sz);
        if (_s == old_val)
        {
            it = s.erase(it, it + sz);
            it = s.insert(it, new_val.begin(), new_val.end());
            it += new_val.size();
        }
        else
        {
            ++it;
        }
    }    
}

int main()
{
    std::string s = "this is valid thru may 1 to june 7 thru through a.thru";

    f1(s, "thru", "through");
    std::cout << s << std::endl;
}
