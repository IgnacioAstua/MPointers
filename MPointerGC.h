//
// Created by nacho on 9/08/24.
//

#ifndef MPOINTERGC_H
#define MPOINTERGC_H
#include "LinkedList.h"


class MPointerGC {
public:
    static MPointerGC* getinstance();
    template <typename T>
    T* newMPointer (T* ptr);
private:
    MPointerGC();
    static MPointerGC* instance;
    static LinkedList list;
};



#endif //MPOINTERGC_H
