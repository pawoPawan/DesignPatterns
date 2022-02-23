#include "RectangleFactory.h"
#include "Rectangle.h"

#include <iostream>
using namespace std;


std::unique_ptr<Shape> RectangleFactory::getRectangle()
{
	cout << "START:- Rectangle Creation" << endl;
	cout << "END:- Rectangle Creation" << endl;
	return std::move(std::unique_ptr<Shape>(new Rectangle()));
}