#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	float width;
	float height;

public:
	Rectangle(float new_width, float new_height);
	float Area();
	float Perimeter();
};