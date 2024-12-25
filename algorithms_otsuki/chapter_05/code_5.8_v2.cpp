#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

template <typename T>
void choose_smaller(T& a, T b)
{
    if (b < a) a = b;
}


void show(const std::vector<std::vector<int>>& memo)
{
    for (auto col : memo)
    {
        for (auto elem : col)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}


void to_prev(
    const std::vector<std::vector<int>>& memo, 
    size_t& i, size_t& j
)
{
    std::vector<int> scores;
    
    if (memo[i][j] == memo[i - 1][j - 1] || memo[i][j] == memo[i - 1][j - 1] + 5)
    {
        scores.push_back(memo[i - 1][j - 1]);      
    }

    if (memo[i][j] == memo[i - 1][j] + 2)
    {
        scores.push_back(memo[i - 1][j]);
    }

    if (memo[i][j] == memo[i][j - 1] + 2)
    {
        scores.push_back(memo[i][j - 1]);
    }
    
    const int smallest = *std::min_element(scores.begin(), scores.end());
    
    if (smallest == memo[i - 1][j - 1])
    {
        i -= 1;
        j -= 1;
        return;
    }
    
    if (smallest == memo[i - 1][j])
    {
        i -= 1;
        return;
    }

    if (smallest == memo[i][j - 1])
    {
        j -= 1;
        return;
    }       
}

void back_tracking(
    const std::vector<std::vector<int>>& memo,
    std::vector<std::vector<size_t>>& moves
)
{
    const size_t n = memo.size() - 1;
    const size_t m = memo[0].size() - 1;
    
    size_t i = n;
    size_t j = m;
    
    moves.push_back({i, j});
    while (i > 0 && j > 0)
    {
        to_prev(memo, i, j);
        moves.push_back({i, j});
    }

    std::reverse(moves.begin(), moves.end());
}


void show_alignment(
    const std::vector<std::vector<size_t>>& moves,
    const std::string& s,
    const std::string& t
)
{
    const std::string _s = "-" + s;
    const std::string _t = "-" + t;
    
    for (auto e : moves)
    {
        std::cout << e[0] << " " << e[1] << std::endl;
    }
    
    size_t n = _s.size();
    size_t m = _t.size();
     
    const size_t k = (n < m)? n : m;

    std::vector<char> s_aln;
    std::vector<char> t_aln;

    if (moves[0][0] == 0 && moves[0][1] == 0)
    {
        s_aln.push_back(_s[1]);
        t_aln.push_back(_t[1]);
    }
    else
    {
        s_aln.push_back(_s[moves[0][0]]);
        t_aln.push_back(_t[moves[0][1]]);
    }
    

    for (size_t i = 1; i < k + 1; ++i)
    {
        if (moves[i - 1][0] == moves[i][0])
        {
            s_aln.push_back('-');
        }
        else
        {
            s_aln.push_back(_s[moves[i][0]]);
        }
    }

    
    for (size_t i = 1; i < k + 1; ++i)
    {
        if (moves[i - 1][1] == moves[i][1])
        {
            t_aln.push_back('-');
        }
        else
        {
            t_aln.push_back(_t[moves[i][1]]);
        }
    }

    for (auto e : s_aln) std::cout << e;
    std::cout << std::endl;
    for (auto e : t_aln) std::cout << e;
    std::cout << std::endl;
}


int main()
{
    std::string s, t;
    std::cin >> s >> t;

    if (!std::cin) return -1;

    const size_t n = s.size();
    const size_t m = t.size(); 

    const int INF = 1 << 29;
    std::vector<std::vector<int>> memo(n + 1, std::vector<int>(m + 1, INF));
    
    memo[0][0] = 0;

    for (size_t i = 0; i <= n; ++i)
    {
        for (size_t j = 0; j <= m; ++j)
        {
            if (i > 0 && j > 0)
            {
                 if (s[i - 1] == t[j - 1]) choose_smaller(memo[i][j], memo[i - 1][j - 1]);
                 else choose_smaller(memo[i][j], memo[i - 1][j - 1] + 5);
            }
            
            if (i > 0) choose_smaller(memo[i][j], memo[i - 1][j] + 2);
            
            if (j > 0) choose_smaller(memo[i][j], memo[i][j - 1] + 2);
        }
    } 
    
    show(memo);
    
    std::vector<std::vector<size_t>> moves;
    back_tracking(memo, moves);
    std::cout << memo[n][m] << std::endl;
    show_alignment(moves, s, t);
}
