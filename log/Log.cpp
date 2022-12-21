//
// Created by 幻弦让叶 on 2022/12/19.
//

#include <iostream>
#include "Log.h"

using namespace std;

void Log::setLogLevel(Level level) {
    m_LogLevel = level;
}

void Log::e(const char * msg) const {
    if (m_LogLevel >= Error) {
        cout << "[ERROR]: " << msg << endl;
    }
}

void Log::w(const char * msg) const {
    if (m_LogLevel >= Warning) {
        cout << "[WARNING]: " << msg << endl;
    }
}

void Log::i(const char * msg) const {
    if (m_LogLevel >= Info) {
        cout << "[INFO]: " << msg << endl;
    }
}
