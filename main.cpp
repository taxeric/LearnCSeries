#include <iostream>
#include "log/Log.h"
#include <cstring>

int main() {
    Log log;
    log.setLogLevel(log.LogLevelWarn);
    log.e("hello compose");
    log.w("hello compose");
    log.i("hello compose");
    return 0;
}
