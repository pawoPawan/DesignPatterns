#include "Shape.h"
#include "Rectangle.h"

#include <iostream>
using namespace std;

Rectangle::Rectangle()
{
	cout << "Rectangle Constructor" << endl;
}
Rectangle::~Rectangle()
{
	cout << "Rectangle Destructor" << endl;
}
void Rectangle::Draw()
{
	cout << "Rectangle Draw" << endl;
}