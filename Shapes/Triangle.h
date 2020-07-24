#pragma once
#include "Shape.h"

class Triangle : public Shape
{
	// Assumes triangle is an equilateral triangle

private:
	float base;
	float height;

public:
	Triangle(float new_base, float new_height);
	float Area();
	float Perimeter();
};