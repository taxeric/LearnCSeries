#include <iostream>
#include "log/Log.h"
#include "entity/Entity.h"
#include "enum/EnumExample.h"
#include "entity/EntityV2.h"
#include "entity/EntityV3.h"
#include <cstring>
#include <vector>

void printClassName(Printable * p) {
    cout << p->getClassName() << endl;
}

void printVector(const vector<int>& vertices) {
    for (int v : vertices) {
        cout << v << endl;
    }
}

int main() {
    vector<Vertex> vertices;
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);
    return 0;
}
