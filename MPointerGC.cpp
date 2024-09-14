//
// Created by nacho on 9/08/24.
//

#include "MPointerGC.h"
#include <iostream>


#include "LinkedList.h"
using namespace std;

//Construcotr de la clase.
MPointerGC::MPointerGC() = default;

//Funcion que retorna la instancia de MPointerGC
MPointerGC* MPointerGC::getinstance() {
    if (instance == nullptr) {
        instance = new MPointerGC();
    }
    return  instance;

}

//Funcion que le indica a LinkedList que cree un nuevo nodo.
void MPointerGC::newptr(void* p) {
    Node* node = new Node();
    node->id = p;
    node->ref += 1;
    list.newNode(node);
}

//Funcion que le indica a LinkedList que reduzca las referencias de un nodo.
void MPointerGC::refLower(void *ptr) {
    if (ptr != nullptr) {
        list.refLower(ptr);
    }
}

//Funcion que le indica a LinkedList que aumente las referencias de un nodo.
void MPointerGC::refUpper(void *ptr) {
    if (ptr != nullptr) {
        list.refUpper(ptr);
    }
}
