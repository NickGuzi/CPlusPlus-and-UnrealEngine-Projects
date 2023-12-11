#include "circle.h"
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

const double pi = 3.14159265;

double circle::getArea() 
{
	return pi * (radius * radius);
}
