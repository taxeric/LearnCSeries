#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

int main() {
    Log log;
    log.setLogLevel(Log::Warning);

    Entity * entity = new Entity();
    Player * player = new Player("Eric");

    printClassName(entity);
    printClassName(player);

    return 0;
}
