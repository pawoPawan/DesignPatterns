#ifndef _SHAPEFACTORY_H_
#define _SHAPEFACTORY_H_

#include <memory>
class Shape;
// Forward declaration vs #include

enum class ShapeType 
{
	CIRCLE,
	TRIANGLE,
	RECTANGLE,
	UNDEF
};

class ShapeFactory
{
public:
	static Shape* getShapeInstance(ShapeType iType);
	// Better code practice to handle memory leaks
	static std::unique_ptr<Shape> getShapeInstance_V1(ShapeType iType);
	static ShapeType getType(int iType);
private:
protected:

};

#endif
