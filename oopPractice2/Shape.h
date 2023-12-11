#pragma once
#include <string>
#include <iostream>

using namespace std;

class Shape
{
public:
	string color;
	double area;
	virtual double getArea();
};

