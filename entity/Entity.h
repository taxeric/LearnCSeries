//
// Created by 幻弦让叶 on 2022/12/21.
//

#include <iostream>

#ifndef LEARNCSERIES_ENTITY_H
#define LEARNCSERIES_ENTITY_H

using namespace std;

struct Entity{
    static int x,y;

    static void print() ;
};

void Entity::print() {
    cout << "x -> " << x << endl;
    cout << "y -> " << y << endl;
}

#endif //LEARNCSERIES_ENTITY_H
