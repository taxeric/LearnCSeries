//
// Created by 幻弦让叶 on 2022/12/19.
//

#include <iostream>
#include "Log.h"

using namespace std;

void Log::setLogLevel(int level) {
    m_LogLevel = level;
}

void Log::e(const char * msg) const {
    if (m_LogLevel >= LogLevelErr) {
        cout << "[ERROR]: " << msg << endl;
    }
}

void Log::w(const char * msg) const {
    if (m_LogLevel >= LogLevelWarn) {
        cout << "[WARNING]: " << msg << endl;
    }
}

void Log::i(const char * msg) const {
    if (m_LogLevel >= LogLevelInfo) {
        cout << "[INFO]: " << msg << endl;
    }
}
