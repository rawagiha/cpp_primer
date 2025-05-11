#include <iostream>
#include <vector>

const int MAX = 3;

int st[MAX];
int top = 0;

void init()
{
    top = 0;
}

bool is_empty()
{
    return (top == 0);
}

bool is_full()
{
    return (top == MAX);
}

void push(int x)
{
    if (is_full())
    {
        std::cout << "error: stack is full." << std::endl;
        return;
    }

    st[top] = x;
    ++top;
}

int pop()
{
    if (is_empty())
    {
        std::cout << "error: stack is empty." << std::endl;
        return -1;
    }
    --top;
    return st[top];
}

void show(const int st_[], int top_)
{
    for (int i = 0; i < top_; ++i)
    {
        std::cout << st_[i] << ", ";
    }
    std::cout << std::endl;
}

int main()
{
    init();

    push(3);
    push(5);
    push(7);
    show(st, top); 

    push(9);

    pop();
    show(st, top);
    pop();
    pop();
    pop();
}
