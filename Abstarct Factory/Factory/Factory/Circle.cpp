#include "Shape.h"
#include "Circle.h"

#include <iostream>
using namespace std;

Circle::Circle()
{
	cout << "Circle Constructor" << endl;
	Initialize();
}

void Circle::Initialize()
{
	cout << "Circle::Initialize" << endl;

	m_Center.setX(0.0);
	m_Center.setY(0.0);
	m_Center.setZ(0.0);

	m_Radius = 0.0;
}
Circle::~Circle()
{
	cout << "Circle Destructor" << endl;
}
void Circle::Draw()
{
	cout << "Circle Draw" << endl;
}

void Circle::setCenter(Point iCenter)
{
	cout << "Circle::setCenter" << endl;
	m_Center.setX(iCenter.getX());
	m_Center.setY(iCenter.getY());
	m_Center.setZ(iCenter.getZ());
}

void Circle::setRadius(double iRadius)
{
	cout << "Circle::setRadius" << endl;
	m_Radius = iRadius;
}

Point Circle::getCenter()
{
	cout << "Circle::getCenter" << endl;
	return m_Center;
}

double Circle::getRadius()
{
	cout << "Circle::getRadius" << endl;
	return m_Radius;
}

