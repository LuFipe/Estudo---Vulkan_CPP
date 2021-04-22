#include "./HEADERS/Class_Declaration.h"

#define nl std::endl

int main()
{
	HelloTriangleApplication application;

	try
	{
		application.run();
	}
	
	catch(const std::exception& e)
	{
		std::cerr << e.what() << nl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}