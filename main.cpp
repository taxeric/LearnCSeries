#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

int main() {
    Log log;
    log.setLogLevel(Log::Warning);

//    Entity entity;
//    entity.print();
    Entity *e1 = new Entity(2, 3);
    e1->print();
    return 0;
}
