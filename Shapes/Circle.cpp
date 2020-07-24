#include "Circle.h"

Circle::Circle(float new_radius)
{
	radius = new_radius;
}

float Circle::Area()
{
	return PI * (radius * radius);
}

float Circle::Perimeter()
{
	return 2 * PI * radius;
}
