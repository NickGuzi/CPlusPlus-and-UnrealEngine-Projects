#include <iostream>
#include <string>
#include <iostream>
#include "Shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

int main()
{
	rectangle r;
	triangle t;
	circle c;

	//Rectangle 
	r.color = "green";
	r.length = 5.0;
	r.width = 5.0;
	cout << r.getArea() << endl;
	cout << r.color << endl;

	//Triangle
	t.color = "blue";
	t.base = 5.0;
	t.tHeight = 5.0;
	cout << t.getArea() << endl;
	cout << t.color << endl;

	//Circle 
	c.color = "yellow";
	c.radius = 5.0;
	cout << c.getArea() << endl;
	cout << c.color << endl;
}
