//
// Created by 幻弦让叶 on 2022/12/21.
//

#include <iostream>
#include <utility>
#include <array>

#ifndef LEARNCSERIES_ENTITY_H
#define LEARNCSERIES_ENTITY_H

using namespace std;

class Printable{
public:
    //=0表示为纯虚函数,该方法所在的类为抽象类,且该方法没有函数体
    //类似java的abstract修饰的方法
    virtual string getClassName() = 0;
};

class Entity: public Printable{
public:
    float x,y;
    Entity(){
        x = 0;
        y = 0;
    }
    virtual string getName();
    void move(float xa, float ya);
    string getClassName() override {
        return "Entity";
    }
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
    string getClassName() override {
        return "Player";
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

class ArrayEntity {

public:
    static const int exampleSize = 5;
    int example[exampleSize];
    array<int, 5> another;

    ArrayEntity() {
        for (int & i : example) {
            i = 3;
        }
        for (int & i : another) {
            i = 9;
        }
    }
};

class MapEntity {
private:
    mutable string m_name;
    int m_x, m_y;
    mutable int m_z;
public:
    const string& getName() const;
    [[nodiscard]] int getX() const;
    [[nodiscard]] int getY() const;
    void setX(int x);

    void print();
};

int MapEntity::getX() const {
    m_z = 100;
    return m_x;
}

int MapEntity::getY() const {
    return m_y;
}

void MapEntity::setX(int x) {
    m_x = x;
}

const string &MapEntity::getName() const {
    m_name = "lanier";
    return m_name;
}

void MapEntity::print() {
    int x = 0;
    //捕捉x可以被lambda函数上下文使用
    auto a = [x](int b)mutable noexcept {
        x ++;
        b ++;
        cout << x << endl << b << endl;
        return x + b;
    };
    auto result = a(9);
    cout << result << endl;
}


#endif //LEARNCSERIES_ENTITY_H
