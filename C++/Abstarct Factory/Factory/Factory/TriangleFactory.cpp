#include "TriangleFactory.h"
#include "Triangle.h"

#include <iostream>
using namespace std;

std::unique_ptr<Shape> TriangleFactory::getTriangle()
{
	cout << "START:- Circle Creation" << endl;
	cout << "END:- Circle Creation" << endl;
	return std::move(std::unique_ptr<Shape>(new Triangle()));
}
