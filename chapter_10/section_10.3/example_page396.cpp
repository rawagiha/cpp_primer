#include <iostream>
#include <vector>
#include <algorithm>

void show(std::vector<int>& v)
{
    std::for_each(v.begin(), v.end(), [] (int i) { std::cout << i << ", "; });
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v{ -4, 6, 0, -9, 3, -2, 1 };

    std::transform(v.begin(), v.end(), v.begin(),
                   [] (int i) { return i < 0 ? -i : i; }); //single return 
    show(v);  

    std::vector<int> v1{ -14, -6, -0, -29, 0, -2, 11 };

    std::transform(
        v1.begin(), v1.end(), v1.begin(),
        [] (int i) -> int
        { 
            if (i < 0)
            {
                return -i;
            }
            else
            {
                return i;            
            }
        }
    );

    show(v1);

}
