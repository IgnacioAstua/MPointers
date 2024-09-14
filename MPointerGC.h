//
// Created by nacho on 9/08/24.
//

#ifndef MPOINTERGC_H
#define MPOINTERGC_H
#include "LinkedList.h"

inline LinkedList lista = LinkedList();
class MPointerGC {

public:
    LinkedList list = lista;
    static MPointerGC* getinstance();
    void newptr (void* gc);
    void refLower (void* ptr);
    void refUpper (void* ptr);
private:
    static MPointerGC* instance;
    MPointerGC();
};

#endif //MPOINTERGC_H
