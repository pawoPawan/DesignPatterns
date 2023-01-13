#include "CircleFactory.h"
#include "Circle.h"

#include <iostream>
using namespace std;

std::unique_ptr<Shape> CircleFactory::getCircle()
{
	cout << "START:- Circle Creation" << endl;
	cout << "END:- Circle Creation" << endl;
	return std::move(std::unique_ptr<Shape>(new Circle()));
}
