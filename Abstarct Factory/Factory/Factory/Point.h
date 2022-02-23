#ifndef _POINT_H_
#define _POINT_H_

#include "Shape.h"

class Point : public Shape
{
public:
	Point();
	~Point();
	void Draw();

	// Setters or Mutators
	void setX(double iX);
	void setY(double iY);
	void setZ(double iZ);

	// Getters or Accessors
	double getX();
	double getY();
	double getZ();
private:
	void Initialize();

	double m_x;
	double m_y;
	double m_z;
protected:
};

#endif
