#include <vector>
#include "Team.h"

struct Node {
    Team* data;
    Node* next;
    Node* prev;
    Node(Team* d, Node* n = nullptr, Node* p = nullptr) : data(d), next(n), prev(p) {}
};

class Club {
    Node* head;
    Node* tail;
public:
    Club() {
        head = new Node(nullptr);
        tail = new Node(nullptr);
        head->next = tail;
        head->prev = nullptr;
        tail->prev = head;
        tail->next = nullptr;
    }


    void add(Team* d);
    void pop(Node* p);
    int length();
    void print();

    ~Club(){
        Node* iter=head;
        while (iter != nullptr) {
            Node* temp = iter->next;
            delete iter;
            iter = temp;
        }
    }
    //TODO
    int totalprice();
    //TODO
    int totalathletes();
    //TODO
    int typeteamcnt();
    //TODO
    int typeathletecnt();
    void save();
};