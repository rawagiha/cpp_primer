#include <iostream>
#include <vector>

const int MAX = 5;

int qu[MAX];
int tail = 0, head = 0;

void init()
{
    head = tail = 0;
}

bool is_empty()
{
    return (head == tail);
}

bool is_full()
{
    return (head == (tail + 1) % MAX);
}

void enqueue(int x)
{
    if (is_full())
    {
        std::cout << "error: queue is full." << std::endl;
        return;
    }

    qu[tail] = x;
    ++tail;

    if (tail == MAX) tail = 0;
}

int dequeue()
{
    if (is_empty())
    {
        std::cout << "error: queue is empty." << std::endl;
        return -1;
    }

    int res = qu[head];
    ++head;

    if (head == MAX) head = 0;
    return res;
}

int main()
{
    init();

    enqueue(3);
    enqueue(5);
    enqueue(7);

    std::cout << dequeue() << std::endl;
}
