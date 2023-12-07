#include <iostream>
#include <vector>

bool is_prefix(const std::vector<int>& shorter, const std::vector<int>& longer)
{
   auto s_sz = shorter.size(), l_sz = longer.size();

   for (decltype(shorter.size()) i = 0; i != s_sz - 1; ++i)
   {
       if (shorter[i] != longer[i]) return false;
   }

   return true;
}

bool is_prefix_wrapper(const std::vector<int>& vec1, const std::vector<int>& vec2)
{
    if (vec1.size() < vec2.size()) return is_prefix(vec1, vec2);
    else return is_prefix(vec2, vec1); 
}

int main()
{
    std::vector<int> a = {0, 1, 1, 2};
    std::vector<int> b = {0, 1, 1, 2, 3 ,5, 8};
    std::vector<int> c = {0, 2, 1, 1};
   
    std::cout << is_prefix_wrapper(b, a) << " " << is_prefix_wrapper(b, c) << std::endl;      
}

