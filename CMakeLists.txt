cmake_minimum_required(VERSION 3.28)
project(Demo)

set(CMAKE_CXX_STANDARD 17)

set(SFML_DIR "C:/SFML/lib/cmake/SFML")

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

add_executable(Demo main.cpp)

target_link_libraries(Demo sfml-graphics sfml-window sfml-system)
