#pragma once
#include "Shape.h"

constexpr auto PI = 3.14159;

class Circle : public Shape
{
private:
	float radius;
	
public:
	Circle(float new_radius);
	float Area();
	float Perimeter();
};