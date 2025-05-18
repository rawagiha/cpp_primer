#include <iostream>
#include <vector> 

struct Edge;

using Graph = std::vector<std::vector<Edge>>; 

struct Edge
{
    int to;
    long long wt;

    Edge(int to_, long long wt_) : to(to_), wt(wt_) {}
};

int main()
{
    int N = 0, M = 0;
    std::cin >> N >> M;

    for (int i = 0; i < M; ++i)
    {
        int a = 0, b = 0;
        long long wt_ = 0;
        std::cin >> a >> b >> wt_;

        G[a].push_back(Edge(b, wt_));
    }
}
