CFLAGS = -std=c++17 -O2
LDFLAGS = -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi

Tringle: HelloTriangles.o Definitions.o
	g++ $(CFLAGS) -o Tringle HelloTriangles.o Definitions.o $(LDFLAGS)

HelloTriangles.o : HelloTriangles.cpp ./HEADERS/Class_Declaration.h
	g++ $(CFLAGS) -o HelloTriangles.o -c HelloTriangles.cpp $(LDFLAGS)

Definitions.o : ./DEFINITIONS/Definitions.cpp ./HEADERS/Class_Declaration.h
	g++ $(CFLAGS) -o Definitions.o -c ./DEFINITIONS/Definitions.cpp $(LDFLAGS)

test: Tringle
	./Tringle