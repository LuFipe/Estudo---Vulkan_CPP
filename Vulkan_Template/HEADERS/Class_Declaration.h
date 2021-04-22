#ifndef CLASS_DECLARATIONS
#define CLASS_DECLARATIONS

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class HelloTriangleApplication{
	private:
		const uint32_t WIDTH = 800;
		const uint32_t HEIGHT = 600;
		GLFWwindow * window;

		void initWindow();
		void initVulkan();
		void mainLoop();
		void cleanUp();
	public:
		void run(){
		initWindow();
		initVulkan();
		mainLoop();
		cleanUp();	
		};
		HelloTriangleApplication(){};
		~HelloTriangleApplication(){};
};

#endif