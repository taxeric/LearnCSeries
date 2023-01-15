#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

int main() {
    MapEntity e = MapEntity();
    e.setX(101);
    cout << e.getX() << endl;
    cout << e.getNameV1() << endl;
    e.print();
    return 0;
}
