#include "../HEADERS/Class_Declaration.h"

void HelloTriangleApplication::initWindow(){
	glfwInit(); // INIT GLFW library
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); // DON'T INIT OpenGL
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); // DISABLE RESIZE
	this->window = glfwCreateWindow(this->WIDTH, this->HEIGHT, "Vulkan", nullptr, nullptr); // Paarametrs da Janela (Comp, Alt, Titulo, Monitor, OpenGL_only)
}

void HelloTriangleApplication::initVulkan(){

}

void HelloTriangleApplication::mainLoop(){
	while(!glfwWindowShouldClose(this->window)) // ENSURE LOOPS
	{
		glfwPollEvents(); //Expect input
	}

}

void HelloTriangleApplication::cleanUp(){
	glfwDestroyWindow(this->window);
	glfwTerminate();
}