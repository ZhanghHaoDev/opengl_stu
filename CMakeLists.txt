cmake_minimum_required(VERSION 3.10)
project(OpenGL_stu)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(OpenGL_stu main.cpp)
target_link_libraries(OpenGL_stu OpenGL::GL GLEW::GLEW glfw)