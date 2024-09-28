#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    // 输出GLFW版本
    int glfwMajor, glfwMinor, glfwRev;
    glfwGetVersion(&glfwMajor, &glfwMinor, &glfwRev);
    std::cout << "GLFW Version: " << glfwMajor << "." << glfwMinor << "." << glfwRev << std::endl;

    GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL Version Info", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        return -1;
    }

    // 输出GLEW版本
    std::cout << "GLEW Version: " << glewGetString(GLEW_VERSION) << std::endl;

    // 关闭窗口和终止GLFW
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}