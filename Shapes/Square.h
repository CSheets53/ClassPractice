#pragma once
#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(float width) : Rectangle(width, width) {}
};