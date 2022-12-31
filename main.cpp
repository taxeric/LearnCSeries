#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include <cstring>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

int main() {
//    char * name = "Lanier";
//    name[2] = 'A';
    string name = "Lanier";
    name += " Dodd";
    cout << name << endl;
    cout << name.size() << endl;
    bool exist = name.find("ni") != string::npos;
    cout << exist << endl;

    return 0;
}
