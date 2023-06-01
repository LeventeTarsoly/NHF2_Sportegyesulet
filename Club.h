#include <vector>
#include "Team.h"

#ifndef NHF_SPORTEGYESULET_CLUB_H
#define NHF_SPORTEGYESULET_CLUB_H

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
    /// Paraméterként adott csapatot hozzáadja a listához
    /// @param d Team pointer a csapatról
    void add(Team* d);
    /// Paraméterként adott listaelemet törli a listáról
    /// @param p listaelem pointer a csapatról
    void pop(Node* p);
    ///Visszaadja a lista hosszát head és tail nélkül
    /// @return int hossz
    int length()const;
    ///Kiírja a lista elemeit sorban
    void print()const;

    Node* gethead()const{
        return head;
    }
    ///Visszaadja a csapatok évi bevételét
    /// @return int bevétel
    int totalprice()const;
    ///Visszaadja a csapatok tagjainak számát
    /// @return int
    int totalathletes()const;
    ///Fileba menti a csapatokat
    void save();

    ~Club(){
        Node* iter=head;
        while (iter != nullptr) {
            Node* temp = iter->next;
            delete iter->data;
            delete iter;
            iter = temp;
        }
    }
};

#endif // NHF_SPORTEGYESULET_CLUB_H