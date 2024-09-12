//
// Created by nacho on 9/08/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
struct Node {
    template <typename T>
    int* id;
    int ref;
    Node* next;
    Node() {
        ref =0;
        id = nullptr;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList();

    void newNode(Node *node);

    void deleteNode(int* id);

};



#endif //LINKEDLIST_H
