#include "Rectangle.h"

Rectangle::Rectangle(float new_width, float new_height)
{
	width = new_width;
	height = new_height;
}

float Rectangle::Area()
{
	return width * height;
}

float Rectangle::Perimeter()
{
	return (width * 2) + (height * 2 );
}
