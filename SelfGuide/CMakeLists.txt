cmake_minimum_required(VERSION 2.6)
project(selfguide)

add_executable(selfguide cmd.cpp)

install(TARGETS selfguide RUNTIME DESTINATION bin)
