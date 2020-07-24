#include <iostream>
#include "Square.h"


int main()
{
	Rectangle rect(5, 4.5);
	Square sqr(2.5);

	std::cout << "The area of the rectangle is: " << rect.Area() << " units." <<
		"\nThe perimeter of the rectangle is: " << rect.Perimeter() << " units." << std::endl;

	std::cout << "The area of the square is: " << sqr.Area() << " units." <<
		"\nThe perimeter of the square is: " << sqr.Perimeter() << " units." << std::endl;

	return 0;
}