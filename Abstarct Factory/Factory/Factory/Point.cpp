#include "Shape.h"
#include "Point.h"

#include <iostream>
using namespace std;

Point::Point()
{
	cout << "Point Constructor" << endl;
	Initialize();
}
void Point::Initialize()
{
	cout << "Point::Initialize" << endl;
	m_x = 0.0;
	m_y = 0.0;
	m_z = 0.0;
}
Point::~Point()
{
	cout << "Point Destructor" << endl;
}
void Point::Draw()
{
	cout << "Point Draw" << endl;
}

void Point::setX(double iX)
{
	cout << "Point::setX" << endl;
	m_x = iX;
}
void Point::setY(double iY)
{
	cout << "Point::setY" << endl;
	m_x = iY;
}
void Point::setZ(double iZ)
{
	cout << "Point::setZ" << endl;
	m_z = iZ;
}

// Getters or Accessors
double Point::getX()
{
	cout << "Point::getX" << endl;
	return m_x;
}
double Point::getY()
{
	cout << "Point::getY" << endl;
	return m_y;
}
double Point::getZ()
{
	cout << "Point::getZ" << endl;
	return m_z;
}
