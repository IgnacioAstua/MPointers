#include <iostream>
#include "MPointerGC.h"
#include "MPointer.h"

using namespace std;
MPointerGC* MPointerGC::instance = nullptr;


int main(){
    MPointerGC* gc = MPointerGC::getinstance();

    MPointer* myptr = new MPointer();
    cout << "myptr= " << myptr << endl;

    MPointer* myptr2 = new MPointer();
    cout << "myptr2= " << myptr2 << endl;

    MPointer* myptr3 = new MPointer();
    cout << "myptr3= " << myptr3 << endl;

    *myptr = *myptr2;
    cout << myptr->ptr << endl << myptr2->ptr << endl;

    delete myptr;
    return 0;
}