#include "Shape.h"
#include "Triangle.h"

#include <iostream>
using namespace std;

Triangle::Triangle()
{
	cout << "Triangle Constructor" << endl;
}

Triangle::~Triangle()
{
	cout << "Triangle Destructor" << endl;
}

void Triangle::Draw()
{
	cout << "Triangle Draw" << endl;
}
