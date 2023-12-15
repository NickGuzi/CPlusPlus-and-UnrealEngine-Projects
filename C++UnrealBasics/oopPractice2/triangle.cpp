#include "triangle.h"
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

double triangle::getArea() 
{
	return 0.5 * (base * tHeight);
}
