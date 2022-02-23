#ifndef _TRIANGLEACTORY_H_
#define _TRIANGLEACTORY_H_

#include "ShapeFactory.h"
#include "Shape.h"

class TriangleFactory
{
public:

	static std::unique_ptr<Shape> getTriangle();

private:
protected:

};

#endif

