cmake_minimum_required(VERSION 4.4.5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project("OpenGL Game")

add_subdirectory(third_party/glfw-3.5.1)
add_subdirectory(third_party/glad)

find_package(OpenGL REQUIRED)

add_executable(OpenGL_Game
src/main.cpp
${CMAKE_SOURCE_DIR}/third_party/glad/src/gl.c
)

target_include_directories(OpenGL_Game PRIVATE
    ${CMAKE_SOURCE_DIR}/third_party/glad/include
)

target_link_libraries(OpenGL_Game
    PRIVATE
        glad
        glfw
        OpenGL::GL
)
