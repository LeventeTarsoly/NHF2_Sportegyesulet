//
// Created by TLevente on 04/05/2023.
//

#ifndef NHF_SPORTEGYESULET_LIST_H
#define NHF_SPORTEGYESULET_LIST_H

template <typename T>
class List {
private:
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(const T& d, Node* n = nullptr, Node* p = nullptr) : data(d), next(n), prev(p) {}
    };
    Node* head;
    Node* tail;
public:
    List() : head(nullptr), tail(nullptr) {}

    void push_front(const T& d) {
        if (head == nullptr) {
            head = tail = new Node(d);
        } else {
            head->prev = new Node(d, nullptr, head);
            head = head->prev;
        }
    }

    void push_back(const T& d) {
        if (tail == nullptr) {
            head = tail = new Node(d);
        } else {
            tail->next = new Node(d, tail, nullptr);
            tail = tail->next;
        }
    }

    void pop(Node* p){
        p->prev->next=p->next;
        p->next->prev=p->prev;
        delete p;
    }

    ~List(){
        Node* iter=head->next;
        while (iter != nullptr) {
            Node* kov = iter->kov;
            free(iter);
            iter = kov;
        }
    }
};


#endif //NHF_SPORTEGYESULET_LIST_H
