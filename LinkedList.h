//
// Created by nacho on 9/08/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    void* id;
    int ref;
    Node* next;
    int data;
    Node() {
        ref =0;
        id = nullptr;
        data = 0;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList();
    void newNode(Node *node);
    void refLower(void* ptrId);
    void refUpper(void* ptrId);
    void deleteNode(void* ptrId);

};



#endif //LINKEDLIST_H
