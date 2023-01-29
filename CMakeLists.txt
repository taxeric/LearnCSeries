cmake_minimum_required(VERSION 3.24)
project(LearnCSeries)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearnCSeries main.cpp log/Log.cpp log/Log.h entity/Entity.h entity/Entity.h enum/EnumExample.h entity/EntityV2.h)
