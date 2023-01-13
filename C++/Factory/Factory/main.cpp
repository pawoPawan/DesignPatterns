
#include "Shape.h"
#include "ShapeFactory.h"

#include <iostream>
#include <memory>

using namespace std;

ShapeType getTypeFromInput()
{
	int iType;
	cin >> iType;
	return ShapeFactory::getType(iType);
}

int main()
{
	// NOTE:- This way of writing code may lead to memory leaks.
	/*Shape* pShape = ShapeFactory::getShapeInstance(getTypeFromInput());
	if (pShape != nullptr)
	{
		pShape->Draw();
	}
	delete pShape;*/


	// Better Code practice to get rid of memory handling related issues.
	unique_ptr<Shape> shape{ ShapeFactory::getShapeInstance_V1(getTypeFromInput()) };
	if (shape != nullptr)
	{
		shape->Draw();
	}
	return 0;
}
