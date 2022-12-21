#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include <cstring>

int Entity::x;
int Entity::y;

int main() {
    Log log;
    log.setLogLevel(log.LogLevelWarn);
    log.e("hello compose");
    log.w("hello compose");
    log.i("hello compose");

    Entity entity{};
    Entity::x = 1;
    Entity::y = 2;
    Entity::print();
    Entity e1{};
    Entity::x = 3;
    Entity::y = 4;
    Entity::print();
    return 0;
}
