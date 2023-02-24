//
// Created by 幻弦让叶 on 2023/2/24.
//
#include <iostream>
#include "EntityV3.h"

Vertex::Vertex(int x1, int y1, int z1) {
    this->x = x1;
    this->y = y1;
    this->z = z1;
    std::cout << "copied " << x << " " << y << " " << z << std::endl;
}
