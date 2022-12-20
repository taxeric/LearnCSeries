#include <iostream>
#include "log/Log.h"
#include <cstring>

void increment(int *value) {
    (*value) ++;
}

//建议复杂功能使用类,否则使用结构体
struct Player{
    int x, y;
    int speed;

    void move(int xa, int ya) {
        x += xa;
        y += ya;
    }
};

int main() {
    Player player{};
    player.x = 1;
    player.y = 2;
    player.move(10, 10);
    return 0;
}
