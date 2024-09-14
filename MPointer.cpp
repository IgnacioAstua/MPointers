//
// Created by nacho on 10/09/24.
//

#include "MPointer.h"
#include <iostream>
#include "MPointerGC.h"
using namespace std;

//Constructor de la clase.
MPointer::MPointer() {
    ptr = this;
}

//Funcion que sobrecarga el operador new.
void * MPointer::operator new(size_t size) {
    void * p = ::operator new(size);
    MPointerGC* gc = MPointerGC::getinstance();
    gc->newptr(p);
    return p;
}

//Funcion que sobrecarga el operador delete.
void MPointer::operator delete(void * p) {
    MPointerGC* gc = MPointerGC::getinstance();
    gc->refLower(p);
    free(p);
}

//Funcion que sobrecarga el operador = (asignacion).
MPointer MPointer::operator=(const MPointer n) {
    if (this != &n) {
        MPointerGC* gc = MPointerGC::getinstance();
        gc->refLower(n.ptr);
        gc->refUpper(this);
        this->ptr = n.ptr;
    }
    return *this;
}


