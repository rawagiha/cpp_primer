#include <iostream>
#include <vector>
#include <cmath>

struct Heap
{
    std::vector<int> heap;
    
    Heap() {};

    void push(int x)
    {
        heap.push_back(x);

        int i = static_cast<int>(heap.size()) - 1;

        while (i > 0)
        {
            int p = (i - 1) / 2;

            if (heap[p] > x) break;

            heap[i] = heap[p];
            i = p;
        }
        heap[i] = x;
    }

    int top()
    {
        if (!heap.empty()) return heap[0];
        else return -1;
    }

    void pop()
    {
        if (heap.empty()) return;
        
        int x = heap.back();
        heap.pop_back(); //remove last elem


    }
};

void show(const Heap& h)
{
    int n = static_cast<int>(h.heap.size());
    int height =  static_cast<int>(std::log2(n)) + 1;
    
    for (int i = 1; i <= height; ++i)
    {
        for (int j = pow(2, i - 1) - 1; j < pow(2, i) - 1 && j < n; ++j)
        {
            std::cout << h.heap[j] << ", ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    Heap h;

    h.push(12); h.push(10); h.push(1); h.push(15); h.push(7); 
    h.push(6); h.push(19); h.push(23);
    
    show(h); 

    std::cout << h.top() << std::endl;
}
