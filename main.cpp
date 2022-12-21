#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

void function() {
    Entity e1;
    e1.print();
}

int main() {
    Log log;
    log.setLogLevel(Log::Warning);

//    Entity entity;
//    entity.print();
    function();
    return 0;
}
