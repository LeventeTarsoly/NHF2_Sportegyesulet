//
// Created by TLevente on 04/05/2023.
//

#ifndef NHF_SPORTEGYESULET_LIST_H
#define NHF_SPORTEGYESULET_LIST_H

template <typename T>
struct Node {
    T data;
    Node* next;
    Node* prev;
    Node(const T& d, Node* n = nullptr, Node* p = nullptr) : data(d), next(n), prev(p) {}
};

template <typename T>
class List {
    Node<T>* head;
    Node<T>* tail;
public:
    List() : head(nullptr), tail(nullptr) {}

    void push_front(const T& d) {
        if (head == nullptr) {
            head = new Node<T>(d);
            tail = new Node<T>(d);
        } else {
            head->prev = new Node<T>(d, nullptr, head);
            head = head->prev;
        }
    }

    void push_back(const T& d) {
        if (tail == nullptr) {
            head = new Node<T>(d);
            tail = new Node<T>(d);
        } else {
            tail->next = new Node<T>(d, tail, nullptr);
            tail = tail->next;
        }
    }

    void pop(Node<T>* p){
        p->prev->next = p->next;
        p->next->prev = p->prev;
        delete p;
    }

    int length(){
        Node<T>* iter=head;
        int cnt = 0;
        while (iter != nullptr) {
            cnt++;
            iter = iter->next;
        }
        return cnt;
    }

    ~List(){
        Node<T>* iter=head;
        while (iter != nullptr) {
            Node<T>* temp = iter->next;
            free(iter);
            iter = temp;
        }
    }
};


#endif //NHF_SPORTEGYESULET_LIST_H
