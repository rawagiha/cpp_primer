#include <vector>
#include <string>
#include <iostream>

template <typename T>
void choose_smaller(T& a, T b)
{
    if (b < a) a = b;
}


int main()
{
    std::string s, t;
    std::cin >> s >> t;

    if (!std::cin) return -1;

    const size_t n = s.size();
    const size_t m = t.size(); 

    std::vector<std::vector<int>> memo(n + 1, std::vector<int>(m + 1, 600));
    
    memo[0][0] = 0;

    for (size_t i = 0; i <= n; ++i)
    {
        for (size_t j = 0; j <= m; ++j)
        {
            if (i > 0 && j > 0)
            {
                 if (s[i - 1] == t[j - 1]) choose_smaller(memo[i][j], memo[i - 1][j - 1]);
                 else choose_smaller(memo[i][j], memo[i - 1][j - 1] + 1);
            }
            
            if (i > 0) choose_smaller(memo[i][j], memo[i - 1][j] + 1);
            
            if (j > 0) choose_smaller(memo[i][j], memo[i][j - 1] + 1);
        }
    } 

    std::cout << memo[n][m] << std::endl;
}
