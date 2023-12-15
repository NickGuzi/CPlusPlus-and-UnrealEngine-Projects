#pragma once
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

class triangle : public Shape
{
public:
	double base;
	double tHeight;
	triangle(){
	}
	triangle(double aBase, double aHeight) 
	{
		base = aBase;
		tHeight = aHeight;
	}
	double getArea();
};

