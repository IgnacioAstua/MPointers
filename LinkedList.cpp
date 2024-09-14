//
// Created by nacho on 9/08/24.
//

#include "LinkedList.h"
#include <iostream>
using namespace std;

//Constructor de la clase
LinkedList::LinkedList() {
    head = nullptr;
}

//Funcion que crea un nuevo nodo.
 void LinkedList::newNode(Node* node) {
    if (head == nullptr) {
        cout << "New head" << endl;
        node->next = nullptr;
        head = node;
    }
    else {
        cout << "New node" << endl;
        node->next = head;
        head = node;
    }
}

//Funcion que busca un nodo y reduce sus referencias.
void LinkedList::refLower(void *ptrId) {
    Node* current = head;
        while (current != nullptr) {
            if (current->id == ptrId) {
                current->ref -= 1;
                cout << "Refrence= " << current->ref << endl;
                break;
            }else{
                current = current->next;
            }
        }
    }

//Funcion que busca un nodo y aumenta sus referencias.
void LinkedList::refUpper(void *ptrId) {
    Node* current = head;
    while (current != nullptr) {
        if (current->id == ptrId) {
            current->ref += 1;
            cout << "Refrence= " << current->ref << endl;
            break;
        }else{
            current = current->next;
        }
    }
}

//Funcion que elimina un nodo especifico.
void LinkedList::deleteNode(void *ptrId) {
    Node* current = head;
    while (current != nullptr) {
        if (current->id == ptrId) {
            Node* temp = current->next;
            current->next = temp->next;
            cout << "Deleted node" << endl;
            break;
        }else{
            current = current->next;
        }
    }
}