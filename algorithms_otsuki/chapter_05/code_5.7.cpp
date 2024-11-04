#include <vector>
#include <iostream>
#include <random>
#include <utility>

typedef std::pair<int, int> Item;
typedef std::vector<Item> Items;

void prep_items(Items& items, const int sz)
{
    std::random_device engine;
    std::uniform_int_distribution<int> weights {1, 10};
    std::uniform_int_distribution<int> values {1, 20};
    
    for (size_t i = 0; i < sz; ++i)
    {
        items.push_back(std::make_pair(weights(engine), values(engine)));
        
        // items.emplace_back(weights(engine), values(engine));
         
        /*This does not initialize the pair 
          items[i].first = weights(engine);
          items[i].second = values(engine);
        */
    } 
}

void show(const Items& items)
{
    for (auto item : items)
    {
        std::cout << "weight: " << item.first 
                  << " value: " << item.second 
                  << std::endl;
    }
}

int main()
{   

    int n, w;
    std::cin >> n >> w;
    if (!(std::cin) || n < 1 || w < 1) return -1;  
  
    Items items;
    prep_items(items, n);

    std::vector<std::vector<int>> memo(n + 1, std::vector<int>(w, -1));
    
    for (size_t i = 0; i < n + 1; ++i)
    {
        for (size_t j = 0; j < w; ++j)
        {
            if (i == 0) memo[i][j] == 0; // no items selected;
                   
        }
    }
}

