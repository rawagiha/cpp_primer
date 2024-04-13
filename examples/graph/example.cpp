#include <iostream>
#include <vector>

//ref:https://www.techiedelight.com/ja/graph-implementation-using-stl/

struct Edge 
{
    int src, dest;
};

struct Graph
{   
    // adjacency list
    // { node_0, node_1, .. node_n }
    // node_i = {destination nodes from i} 
    std::vector<std::vector<int>> adj_list;

    Graph(const std::vector<Edge>& edges, int n)
    {
        adj_list.resize(n);

        for (auto& edge: edges)
        {
            adj_list[edge.src].push_back(edge.dest);
        }
    }
};

void print(const Graph& graph, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << i << " ——> ";

        for (int v : graph.adj_list[i]) 
        {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<Edge> edges =
    {
        {0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}
    };
 
    int n = 6;
 
    Graph graph(edges, n);
 
    print(graph, n);
 
    return 0;
}
