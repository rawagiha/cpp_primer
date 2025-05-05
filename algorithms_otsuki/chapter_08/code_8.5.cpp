#include <iostream>
#include <string>
#include <vector>

struct Node
{
    Node *prev, *next;

    std::string name;

    Node(std::string name_="") : prev(nullptr), next(nullptr), name(name_) { }
};

Node* nil;

void init()
{
    nil = new Node();
    nil->prev = nil;
    nil->next = nil;
}

void show()
{
    Node* curr = nil->next;
    for (; curr != nil; curr = curr->next)
    {
        std::cout << curr->name << " -> ";
    }

    std::cout << std::endl;
}

void insert(Node* v, Node* p=nil)
{
    v->next = p->next;
    v->prev = p;
    p->next->prev = v;
    p->next = v;
}

void erase(Node* v)
{
    if (v == nil) return;
    
    v->prev->next = v->next;
    v->next->prev = v->prev;

    delete v;
}

int main()
{
    init();

    std::vector<std::string> names = {"yamamoto",
                                      "watanabe",
                                      "ito",
                                      "takahashi",
                                      "suzuki",
                                      "sato"};

    Node* watanabe;

    for (size_t i = 0; i < names.size(); ++i)
    {
        Node* node = new Node(names[i]);

        insert(node);

        if (i == 3)
        {
            Node* tanaka = new Node("tanaka");
            insert(tanaka, node);
        }

        if (names[i] == "watanabe") watanabe = node;
    }


    std::cout << "before: ";
    show();

    erase(watanabe);

    std::cout << "after: ";
    show(); 
}
