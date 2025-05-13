#pragma once

#include "ShapesNamespace.h"

#include <string>

using namespace std;

namespace Shapes {
    enum Shape {
        CIRCLE,
        SQUARE,
        TRIANGLE
    };

    void printShape(Shape shape);
    Shape getShapeFromString(string shapeStr);
}
