//
// Created by 幻弦让叶 on 2022/12/19.
//

#include <iostream>

using namespace std;

void log(const char* msg) {
    cout << msg << endl;
}

void log(int v) {
    cout << v << endl;
}

void log(const int* v) {
    cout << *v << endl;
}
