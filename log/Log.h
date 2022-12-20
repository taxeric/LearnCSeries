//
// Created by 幻弦让叶 on 2022/12/19.
//

#ifndef LEARNCSERIES_LOG_H
#define LEARNCSERIES_LOG_H

class Log{
public:
    const int LogLevelErr = 0;
    const int LogLevelWarn = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;
public:
    void setLogLevel(int level);
    void e(const char*) const;
    void w(const char*) const;
    void i(const char*) const;
};

#endif //LEARNCSERIES_LOG_H
