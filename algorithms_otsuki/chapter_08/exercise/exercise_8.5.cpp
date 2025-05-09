#include <iostream>
#include <vector>
#include <unordered_set>
#include <random> 

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> u_dist(1, 100);

void fill_vec(std::vector<int>& v, int n)
{
    for (int i = 0; i < n; ++i)
    {
        v.push_back(u_dist(gen));
    }
}

void fill_set(std::unordered_set<int>& s, int n)
{
    for (int i = 0; i < n; ++i)
    {
        s.insert(u_dist(gen));
    }
}

int main()
{
    int N, M;
    std::cin >> N >> M;
    
    std::vector<int> a;
    std::unordered_set<int> b;
    
    // also O(N), consider as given
    fill_vec(a, N);
    
    // O(M)
    fill_set(b, M);
    
    // O(N)
    size_t cnt = 0;
    for (auto it = a.begin(); it != a.end(); ++it)
    {
        if (b.count(*it)) ++cnt;
    }

    std::cout << cnt << std::endl;
}
