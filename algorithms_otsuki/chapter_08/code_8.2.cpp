#include <iostream>
#include <string>
#include <vector>

struct Node
{
    Node* next;
    std::string name;

    Node(std::string name_ = "") : next(nullptr), name(name_) { } 
};


//nameless node
Node* nil;

//initialization
//pointing to self
void init()
{
    nil = new Node();
    nil->next = nil;
}

void show()
{
    Node* curr = nil->next;

    for(; curr != nil; curr = curr->next)
        std::cout << curr->name << " -> ";

    std::cout << std::endl;
}

//insert v after p
void insert(Node* v, Node* p=nil)
{
    v->next = p->next;
    p->next = v;
}

int main()
{
    std::vector<std::string> names = {"yamamoto",
                                      "watanabe",
                                      "ito",
                                      "takahashi",
                                      "suzuki",
                                      "sato"};

    
    init();
    
    for (size_t i = 0; i < names.size(); ++i)
    {
        Node* node = new Node(names[i]);

        insert(node);

        std::cout <<"step " << i << ": ";
        show();
    }
}
