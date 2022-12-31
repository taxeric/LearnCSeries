#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

int main() {

    int testArray[5];
    testArray[0] = 10;
    testArray[4] = 10;

    cout << testArray[0] << endl;
    cout << testArray << endl;

    int *p = testArray;
    cout << p << endl;
    *(p + 2) = 11;
    cout << testArray[2] << endl;

    int * other = new int[5];
    for (int i = 0; i < 5; i ++) {
        other[i] = 4;
    }
    delete [] other;

    Entity e;

    return 0;
}
