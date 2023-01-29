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
public:
    EntityV2(): mName("Unknown") {
        cout << "default" << endl;
    }
    EntityV2(String  name): mName(std::move(name)) {
        cout << "single param" << endl;
    }

    const String& getName();
};

const String &EntityV2::getName() {
    return mName;
}

#endif //LEARNCSERIES_ENTITYV2_H
