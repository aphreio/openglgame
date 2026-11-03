cmake_minimum_required(VERSION "4.4.5")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project("OpenGL Game")

add_subdirectory(third_party/glfw-3.5.1)
add_subdirectory(third_party/glad)

find_package(OpenGL REQUIRED)

add_executable(OpenGL_Game "src/main.cpp")

target_include_directories(OpenGL_Game PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")

target_link_libraries(OpenGL_Game
    PRIVATE
        glad
        glfw
        OpenGL::GL
)
