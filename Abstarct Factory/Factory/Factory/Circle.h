#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
public:
	Circle();
	~Circle();
	void Draw();

	void setCenter(Point iCenter);
	void setRadius(double iRadius);

	Point getCenter();
	double getRadius();
private:
	void Initialize();

	Point m_Center;
	double m_Radius;
protected:
};

#endif
