#include "ShapeFactory.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

Shape * ShapeFactory::getShapeInstance(ShapeType iType)
{
	if (iType == ShapeType::UNDEF)return nullptr;

	if (iType == ShapeType::CIRCLE)
	{
		return new Circle();
	}
	else if (iType == ShapeType::RECTANGLE)
	{
		return new Rectangle();
	}
	else if (iType == ShapeType::TRIANGLE)
	{
		return new Triangle();
	}
}


std::unique_ptr<Shape> ShapeFactory::getShapeInstance_V1(ShapeType iType)
{
	if (iType == ShapeType::UNDEF)return nullptr;

	if (iType == ShapeType::CIRCLE)
	{
		return std::move(std::unique_ptr<Shape>(new Circle()));
	}
	else if (iType == ShapeType::RECTANGLE)
	{
		return std::move(std::unique_ptr<Shape>(new Rectangle()));
	}
	else if (iType == ShapeType::TRIANGLE)
	{
		return std::move(std::unique_ptr<Shape>(new Triangle()));
	}
}

ShapeType ShapeFactory::getType(int iType)
{
	iType = iType % 3;
	ShapeType type ;
	if (iType == 0)
	{
		type = ShapeType::CIRCLE;
	}
	else if (iType == 1)
	{
		type = ShapeType::TRIANGLE;
	}
	else if (iType == 2)
	{
		type = ShapeType::RECTANGLE;
	}
	return type;
}


