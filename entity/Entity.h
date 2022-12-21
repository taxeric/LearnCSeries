//
// Created by 幻弦让叶 on 2022/12/21.
//

#include <iostream>

#ifndef LEARNCSERIES_ENTITY_H
#define LEARNCSERIES_ENTITY_H

using namespace std;

class Entity{
public:
    int x,y;
    Entity() = delete;
    Entity(int mx, int my){
        x = mx;
        y = my;
    }
    void print() const ;
};

void Entity::print() const {
    cout << "x -> " << x << endl;
    cout << "y -> " << y << endl;
}

#endif //LEARNCSERIES_ENTITY_H
