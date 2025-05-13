#include "ShapesNamespace.h"
#include <iostream>


using namespace std;

namespace Shapes {

	void PrintShape(Shape shape) {
		switch (shape) {
		case CIRCLE:
			std::cout << "circle" << std::endl;
			break;
		case SQUARE:
			std::cout << "square" << std::endl;
			break;
		case TRIANGLE:
			std::cout << "triangle" << std::endl;
			break;
		default:
			std::cout << "Unknown" << std::endl;
			break;
		}
	}


	Shape GetShapeFromString(string shape) {

		if (shape == "circle")
			return CIRCLE;
		else if (shape == "square")
			return SQUARE;
		else if (shape == "triangle")
			return TRIANGLE;
		else
			std::cout << "uknown shape. Exists nexts: circle, square, triangle." << std::endl;

	}
}
