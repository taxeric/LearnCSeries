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
    EntityV2 e;//调用无参构造
    cout << e.getName() << endl;
    EntityV2 *ea;
    {
        EntityV2 e1("Lanier");
        auto *e2 = new EntityV2("Dodd");
        ea = &e1;
        cout << e1.getName() << endl;
        cout << ea->getName() << endl;
        cout << e2->getName() << endl;
        delete e2;
    }
    return 0;
}
