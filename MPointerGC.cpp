//
// Created by nacho on 9/08/24.
//

#include "MPointerGC.h"
#include <iostream>


#include "LinkedList.h"
using namespace std;

MPointerGC* MPointerGC::getinstance() {
    if (instance == nullptr) {
        instance = new MPointerGC();
    }
    return  instance;

}

template<typename T>
T* MPointerGC::newMPointer(T* ptr) {
    string i = typeid(ptr);
    if (i == "i") {
        Node* node = new Node();
        node->id<int*> = ptr;
        list.newNode(node);

    }
    return ptr;
}
