#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

void show(const Graph& g)
{
    for (size_t i = 0; i < g.size(); ++i)
    {
        std::cout << "node " << i << " -> ";
        for (auto b : g[i])
        {
            std::cout << b << ", ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int N = 0, M = 0;
    std::cin >> N >> M;

    Graph G(N);

    for (int i = 0; i < M; ++i)
    {
        int a = 0, b = 0;
        std::cin >> a >> b;
        
        if (a < 0 || a >= N) return -1;
        if (b < 0 || b >= N) return -1; 
        
        G[a].push_back(b);
    }

    show(G);
}
