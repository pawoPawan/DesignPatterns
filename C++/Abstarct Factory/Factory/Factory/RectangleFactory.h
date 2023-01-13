#ifndef _RECTANGLEFACTORY_H_
#define _RECTANGLEFACTORY_H_

#include "ShapeFactory.h"
#include "Shape.h"

class RectangleFactory 
{
public:

	static std::unique_ptr<Shape> getRectangle();

private:
protected:

};

#endif
