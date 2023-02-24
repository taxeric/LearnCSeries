//
// Created by 幻弦让叶 on 2023/2/24.
//

#ifndef LEARNCSERIES_ENTITYV3_H
#define LEARNCSERIES_ENTITYV3_H

struct Vertex{
    int x{}, y{}, z{};
    Vertex(int x1, int y1, int z1);
    Vertex(const Vertex& vertex): x(vertex.x), y(vertex.y), z(vertex.z){
        std::cout << "copied 2 ----------------- " << x << " " << y << " " << z << std::endl;
    };
};

#endif //LEARNCSERIES_ENTITYV3_H
