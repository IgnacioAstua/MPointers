//
// Created by nacho on 10/09/24.
//

#ifndef MPOINTER_H
#define MPOINTER_H
#include <iostream>

using namespace std;

class MPointer {
public:
    void* ptr;
    MPointer();
    void *operator new(size_t size);
    void operator delete(void*);
    MPointer operator =(const MPointer n);
};
#endif //MPOINTER_H
