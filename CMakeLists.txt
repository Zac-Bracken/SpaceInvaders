cmake_minimum_required(VERSION 3.13.0)
project(SpaceInvaders VERSION 0.0.1)

file(GLOB_RECURSE SOURCES src/private/*.cpp src/private/*.c)
file(GLOB_RECURSE HEADERS src/public/*.h)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

link_directories("external/libs/")
include_directories("external/include/" PUBLIC ${CMAKE_SOURCE_DIR}/src)

set(LIBS sfml-graphics-d
sfml-window-d
sfml-audio-d
sfml-network-d
sfml-system-d
sfml-main-d
opengl32
winmm
gdi32)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_link_libraries(${PROJECT_NAME} ${LIBS})

