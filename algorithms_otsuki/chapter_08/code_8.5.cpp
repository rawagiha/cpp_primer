#include <iostream>
#include <string>
#include <vector>

struct Node
{
    Node *prev, *next;

    std::string name;

    Node(std::string name_="") : prev(nullptr), next(nullptr), name(name_) { }

    ~Node() 
    {
        std::cout << name << " deleted" << std::endl;
    }
};

Node* init()
{
    Node* nil = new Node();
    nil->prev = nil;
    nil->next = nil;
    return nil;
}

void show(Node* nil)
{
    Node* curr = nil->next;
    for (; curr != nil; curr = curr->next)
    {
        std::cout << curr->name << " -> ";
    }

    std::cout << std::endl;
}

void insert(Node* v, Node* p)
{
    v->next = p->next;
    v->prev = p;
    p->next->prev = v;
    p->next = v;
}

void erase(Node* v)
{
    v->prev->next = v->next;
    v->next->prev = v->prev;

    delete v;
}

void clear(Node*& nil)
{
    Node* curr = nil->next;
    Node* temp = nullptr;
    
    while (curr != nil)
    {
        temp = curr;
        curr = curr->next;
        erase(temp);
    }

    delete nil;
    nil = nullptr;
}


int main()
{
    Node* nil = init();

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

        insert(node, nil);

        if (i == 3)
        {
            Node* tanaka = new Node("tanaka");
            insert(tanaka, node);
        }

        if (names[i] == "watanabe") watanabe = node;
    }


    std::cout << "before: ";
    show(nil);

    erase(watanabe);

    std::cout << "after: ";
    show(nil); 

    clear(nil);
}
