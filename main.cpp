#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

int main() {
    Log log;
    log.setLogLevel(Log::Warning);

    Entity * entity = new Entity();
    cout << entity->getName() << endl;
    Player * player = new Player("Eric");
    cout << player->getName() << endl;

    Entity * e = player;
    cout << e->getName() << endl;
    return 0;
}
