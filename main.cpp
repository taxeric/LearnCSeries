#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include "entity/EntityV2.h"
#include <cstring>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

void function() {
    EntityV2 e = EntityV2();
}

int main() {
    EntityV2 a = string("ABC");//隐式转换
    cout << a.getName() << endl;
    EntityV2 b = 123;
    cout << b.getName() << endl;
    return 0;
}
