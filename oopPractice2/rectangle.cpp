#include "rectangle.h"
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

double rectangle::getArea() 
{
	return width * length;
}