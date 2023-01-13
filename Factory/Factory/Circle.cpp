#include "Shape.h"
#include "Circle.h"

#include <iostream>
using namespace std;

Circle::Circle()
{
	cout << "Circle Constructor" << endl;
}
Circle::~Circle()
{
	cout << "Circle Destructor" << endl;
}
void Circle::Draw()
{
	cout << "Circle Draw" << endl;
}