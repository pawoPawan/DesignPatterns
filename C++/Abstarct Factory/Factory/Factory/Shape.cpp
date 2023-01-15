#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape()
{
	cout << "Shape Constructor" << endl;
}

Shape::~Shape()
{
	cout << "Shape Destructor" << endl;
}

void Shape::Draw()
{
	cout << "Shape Draw" << endl;
}

