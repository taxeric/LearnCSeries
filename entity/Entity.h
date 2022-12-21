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
    Entity();
    Entity(int mx, int my){
        cout << "construct 2" << endl;
        x = mx;
        y = my;
    }
    ~Entity();
    void print() const ;
};

void Entity::print() const {
    cout << "x -> " << x << endl;
    cout << "y -> " << y << endl;
}

Entity::~Entity() {
    cout << "destroy" << endl;
}

Entity::Entity() {
    x = 0;
    y = 0;
    cout << "construct 1" << endl;
}


#endif //LEARNCSERIES_ENTITY_H
