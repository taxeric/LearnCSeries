#include <iostream>
#include "log/Log.h"
#include <cstring>

void increment(int *value) {
    (*value) ++;
}

int main() {
    int a = 5;
    increment(&a);
    log(a);
    int & ref = a;
    log(ref);
    int b = 9;
    ref = b;
    log(ref);
    log(a);
    ref = 10;
    log(ref);
    log(a);
    return 0;
}
