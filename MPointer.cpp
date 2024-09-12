//
// Created by nacho on 10/09/24.
//

#include "MPointer.h"
#include <iostream>
#include "MPointerGC.h"
using namespace std;

template <typename T>
void* operator new (size_t size){
    MPointerGC* gc = MPointerGC::getinstance();
    MPointer<T> Mpointer = MPointer<T>();
    gc->newMPointer(Mpointer.ptr);
    void* p = malloc(size);
    return p;
}
