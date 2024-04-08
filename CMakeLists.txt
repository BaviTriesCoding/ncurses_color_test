cmake_minimum_required(VERSION 3.27)
project(ncurses_color_test)

set(CMAKE_CXX_STANDARD 17)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(ncurses_color_test main.cpp)

target_link_libraries(ncurses_color_test ${CURSES_LIBRARIES})