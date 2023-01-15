#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

static int s_Level = 0;
static int s_Speed = 2;

int main() {
    srand(time(nullptr));
    s_Level = ::rand() % 20;
    s_Speed = s_Level > 5 ? 10 : 5;
    string str = s_Level > 10 ? "A" : "B";
    cout << s_Level << endl << s_Speed << endl << str;
    return 0;
}
