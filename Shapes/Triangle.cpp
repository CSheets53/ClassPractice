#include "Triangle.h"

Triangle::Triangle(float new_base, float new_height)
{
	base = new_base;
	height = new_height;
}

float Triangle::Area()
{
	return 0.5f * base * height;
}

float Triangle::Perimeter()
{
	return base * 3;
}
