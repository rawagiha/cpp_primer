#include <vector>
#include <iostream>
#include <random>
#include <utility>
#include <algorithm>

typedef std::pair<int, int> Item;
typedef std::vector<Item> Items;

void prep_items(Items& items, const int sz)
{
    std::random_device engine;
    std::uniform_int_distribution<int> weights {1, 5};
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


void prep_test_data(Items& items, int& n, int& w)
{
    const std::vector<int> a = {2, 1, 3, 2, 1, 5};
    const std::vector<int> b = {3, 2, 6, 1, 3, 85};
    
    n = a.size();
    w = 15;

    for (size_t i = 0; i < a.size(); ++i)
        items.emplace_back(a[i], b[i]);
}


int main()
{   

    int n, w;
    std::cin >> n >> w;
    if (!(std::cin) || n < 1 || w < 1) return -1;  
  
    Items items;
    prep_items(items, n);

    //prep_test_data(items, n, w);
    
    show(items); 

    std::vector<std::vector<int>> memo(n + 1, std::vector<int>(w + 1, -1));
    
    
    /*memo[i + 1][j] may be reached by not selecing i + 1 from memo[i][j]
     * or selecting i + 1 from memo[i][j - weight(i+1)] 
    */
    for (size_t i = 0; i < n + 1; ++i)
    {
        for (size_t j = 0; j < w + 1; ++j)
        {
            if (i == 0 || j == 0) memo[i][j] = 0;
            else
            {
                // do not select i th item
                memo[i][j] = memo[i - 1][j]; //tentatively assign
            
                // select i th item
                if (j >= items[i - 1].first) 
                {
                    // ith item is indexed at i - 1 in items
                    memo[i][j] = std::max(
                        memo[i - 1][j - items[i - 1].first] + items[i - 1].second, 
                        memo[i][j]
                   ); 
                }
            }
        }
    }
    
    
    for (size_t i = 0; i < n + 1; ++i)
    {
        for (size_t j = 0; j < w + 1; ++j)
        {
            std::cout << memo[i][j] << ", ";
        }
        std::cout << std::endl;
    
    }
}

