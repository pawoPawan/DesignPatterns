#include "Shape.h"
#include "Line.h"

#include <iostream>
using namespace std;

Line::Line()
{
	cout << "Line Constructor" << endl;
	Initialize();
}

void Line::Initialize()
{
	cout << "Line::Initialize" << endl;
	m_From.setX(0.0);
	m_From.setY(0.0);
	m_From.setZ(0.0);

	m_To.setX(0.0);
	m_To.setY(0.0);
	m_To.setZ(0.0);
}
Line::~Line()
{
	cout << "Line Destructor" << endl;
}
void Line::Draw()
{
	cout << "Line Draw" << endl;
}

// Setters or Mutators
void Line::setFrom(Point iFrom)
{
	cout << "Line::setFrom" << endl;
	m_From.setX(iFrom.getX());
	m_From.setY(iFrom.getY());
	m_From.setZ(iFrom.getZ());
}
void Line::setTo(Point iTo)
{
	cout << "Line::setTo" << endl;
	m_To.setX(iTo.getX());
	m_To.setY(iTo.getY());
	m_To.setZ(iTo.getZ());
}

// Getters or Accessors
Point Line::getFrom()
{
	cout << "Line::getFrom" << endl;
	return m_From;
}
Point Line::getTo()
{
	cout << "Line::getTo" << endl;
	return m_To;
}
