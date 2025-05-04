#include <iostream>
#include <string>
#include <vector>

struct Node
{
    Node* next;
    std::string name;
    
    // no dynamic allocation
    Node(std::string name_ = "") : next(nullptr), name(name_) { } 

    
    // destructor not needed as no dynamic allocation
    // this is to print the deallocation 
    ~Node() 
    {
        std::cout << name << ": deleted" << std::endl;
    }
};

Node* nil = nullptr;

//initialization
//pointing to self
void init()
{
    nil = new Node();
    nil->next = nil;

    //nil will outlive!
}

void show()
{
    Node* curr = nil->next;

    for(; curr != nil; curr = curr->next)
        std::cout << curr->name << " -> ";

    std::cout << std::endl;
}


void clear(Node*& nil) 
{
    if (nil == nullptr) {
        return; 
    }

    Node* curr = nil;
    Node* temp = nullptr;

    while (curr->next != nil) 
    {
        temp = curr;
        curr = curr->next;
        delete temp;
    }
    
    delete curr;
    nil = nullptr; // Reset head to nullptr after deallocation
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

        if (i == 2)
        {
            Node* aho = new Node("aho");
            insert(aho, node);
        }

        std::cout <<"step " << i << ": ";
        show();
    }
    
    clear(nil);
}
