//
// Created by nacho on 9/08/24.
//

#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
}
 void LinkedList::newNode(Node* node) {
    if (head == nullptr) {
        cout << "Head" << endl;
        node->next = nullptr;
        head = node;
    }
    else {
        //cout << "Nuevo" << endl;
        Node* node = new Node();
        node->next = head;
        head = node;
    }
}

