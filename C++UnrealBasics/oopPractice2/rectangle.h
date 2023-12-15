#pragma once
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

class rectangle : public Shape
{
public:
	double width;
	double length;
	rectangle(){
	}
	rectangle(double aWidth, double aLength)
	{
		length = aLength;
		width = aWidth;
	}
	double getArea();
};

