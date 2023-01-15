#ifndef _CIRCLEFACTORY_H_
#define _CIRCLEFACTORY_H_

#include "ShapeFactory.h"
#include "Shape.h"

class CircleFactory
{
public:

	static std::unique_ptr<Shape> getCircle();

private:
protected:

};

#endif
