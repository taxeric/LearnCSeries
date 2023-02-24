//
// Created by 幻弦让叶 on 2023/1/29.
//

#include <utility>

#include "iostream"
#include "string"

#ifndef LEARNCSERIES_ENTITYV2_H
#define LEARNCSERIES_ENTITYV2_H

using namespace std;
using String = std::string;

class EntityV2 {
private:
    String mName;
    int mAge;
public:
    EntityV2(): mName("Unknown"), mAge(-1) {
        cout << "default" << endl;
    }
    EntityV2(String  name): mName(std::move(name)), mAge(-1) {
        cout << "single param" << endl;
    }
    EntityV2(int age): mName("Unknown"), mAge(age) {
        cout << "multiply params" << endl;
    }

    ~EntityV2(){
        cout << "destroy " << this->mName << endl;
    }

    const String& getName();
};

const String &EntityV2::getName() {
    return mName;
}

#endif //LEARNCSERIES_ENTITYV2_H
