#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

int main() {
    Log log;
    log.setLogLevel(Log::Warning);

    Player player;
    player.name = "eric";
    player.move(8, 9);
    player.print();
    return 0;
}
