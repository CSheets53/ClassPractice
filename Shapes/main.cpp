#include <iostream>
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"


int main()
{
	Rectangle rect(5, 4.5);
	Square sqr(2.5);
	Circle circ(3.2);
	Triangle tri(5.2, 2.7);

	std::cout << "The area of the rectangle is: " << rect.Area() << " units." <<
		"\nThe perimeter of the rectangle is: " << rect.Perimeter() << " units.\n" << std::endl;

	std::cout << "The area of the square is: " << sqr.Area() << " units." <<
		"\nThe perimeter of the square is: " << sqr.Perimeter() << " units.\n" << std::endl;

	std::cout << "The area of the circle is: " << circ.Area() << " units." <<
		"\nThe perimeter of the circle is: " << circ.Perimeter() << " units.\n" << std::endl;

	std::cout << "The area of the triangle is: " << tri.Area() << " units." <<
		"\nThe perimeter of the triangle is: " << tri.Perimeter() << " units.\n" << std::endl;

	return 0;
}