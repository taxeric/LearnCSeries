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

class ExampleEntity {
public:
    ExampleEntity() {
        cout << "created" << endl;
    }

    ExampleEntity(int x) {
        cout << "created with " << x <<endl;
    }
};

class MapEntity {
private:
    mutable string m_name;
    int m_x, m_y;
    mutable int m_z;
    ExampleEntity m_example;
public:
    MapEntity();
    MapEntity(string  name);
    const string& getNameV1() const;
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

MapEntity::MapEntity():
m_name("Unknown"), m_y(100), m_z(100), m_example(100) {//<--在这里使用 [成员初始化列表] 来构造带参对象不会调用空参构造
    //当使用如下方式创建对象时会首先执行没有参数的构造,然后把该
    //对象丢弃后再指向带有参数的构造,浪费性能
//    m_example = ExampleEntity(100);
}

MapEntity::MapEntity(string name): m_name(std::move(name)) {
}

const string &MapEntity::getNameV1() const {
    return m_name;
}

#endif //LEARNCSERIES_ENTITY_H
