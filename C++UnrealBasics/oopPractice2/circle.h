#pragma once
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

class circle : public Shape
{
public:
	circle(){
	}
	double radius;
	circle(double aRadius) {
		radius = aRadius;
	}
	double getArea();
};

