#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

int Entity::x;
int Entity::y;

int main() {
    Log log;
    log.setLogLevel(Log::Warning);
    log.e("abc");
    log.w("abc");
    log.i("abc");
    RzEnum example = A;
    return 0;
}
