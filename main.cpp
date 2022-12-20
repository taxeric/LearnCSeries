#include <iostream>
#include "log/Log.h"
#include <cstring>

int main() {
//    log("hello jetpack compose");
    int var = 10;
    log(var);
    int *ptr = &var;
    log(&var);
    *ptr = 11;
    log(ptr);
    log(var);

    char* buffer = new char [8];
    memset(buffer,0,8);
    delete[] buffer;

    return 0;
}
