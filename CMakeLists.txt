cmake_minimum_required(VERSION 3.23)
project(Spring_008_Shadow_Box)

set(CMAKE_CXX_STANDARD 14)

add_executable(Spring_008_Shadow_Box main.cpp ResourceHandler.cpp ResourceHandler.h ResourceHolder.h)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(Spring_008_Shadow_Box sfml-system sfml-window sfml-graphics sfml-audio sfml-network)