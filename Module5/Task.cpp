#include "NamespaceShapes.h"
#include <iostream>

using namespace Shapes;
using namespace std;

int main()
{
    printShape(CIRCLE);
    printShape(SQUARE);
    printShape(TRIANGLE);
    Shape sh = Shape(4);
    printShape(sh);


    string input;
    std::cin >> input;

    sh = GetShapeFromString(input);

    printShape(sh);
}


