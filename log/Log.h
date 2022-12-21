//
// Created by 幻弦让叶 on 2022/12/19.
//

#ifndef LEARNCSERIES_LOG_H
#define LEARNCSERIES_LOG_H

class Log{
public:
    enum Level {
        Error = 0, Warning, Info
    };
private:
    Level m_LogLevel = Info;
public:
    void setLogLevel(Level level);
    void e(const char*) const;
    void w(const char*) const;
    void i(const char*) const;
};

#endif //LEARNCSERIES_LOG_H
