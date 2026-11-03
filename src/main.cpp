#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"
#include "glad/gl.h"

#include <cstdio>

void error_callback(int error, const char* description) {
    fprintf(stderr, "Error: %s\n", description);
}



static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, GLFW_TRUE);
    }
}



int main() {

    glfwSetErrorCallback(error_callback);

    if (!glfwInit()) {
        //Initialization failed
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL Game", NULL, NULL);
    glfwMakeContextCurrent(window);
    if (!window) {
        // Window or OpenGL context creation failed
    }

    gladLoadGL(glfwGetProcAddress);


    while (!glfwWindowShouldClose(window)) {
        // Keep running
    }



    glfwDestroyWindow(window);

    glfwTerminate();
}
