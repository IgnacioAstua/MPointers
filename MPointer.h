//
// Created by nacho on 10/09/24.
//

#ifndef MPOINTER_H
#define MPOINTER_H


template <typename T>
class MPointer {
public:
    T data;
    T* ptr;
    void* operator new (size_t size);
    MPointer() = default;

};



#endif //MPOINTER_H
