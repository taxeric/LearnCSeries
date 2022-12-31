//
// Created by 幻弦让叶 on 2022/12/21.
//

#include <iostream>
#include <utility>

#ifndef LEARNCSERIES_ENTITY_H
#define LEARNCSERIES_ENTITY_H

using namespace std;

class Entity{
public:
    float x,y;
    Entity(){
        x = 0;
        y = 0;
    }
    virtual string getName();
    void move(float xa, float ya);
};

class Player: public Entity{
private:
    string m_Name;

public:
    Player(string  name): m_Name(std::move(name)) {
    }
    string getName() override {
        return m_Name;
    }
    const char * name;
    void print() const ;
};

void Player::print() const {
    cout << "x -> " << x << endl;
    cout << "y -> " << y << endl;
    cout << "name -> " << name << endl;
}

void Entity::move(float xa, float ya) {
    x += xa;
    y += ya;
}

string Entity::getName() {
    return "Entity";
}

#endif //LEARNCSERIES_ENTITY_H
