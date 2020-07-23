#include "Product.h"

bool Product::VerifyItemInfo()
{
	std::cout << "Does this look correct?\n" << std::endl;
	PrintInformation();

	std::cout << "(Y/N): ";
	char response;

	do
	{
		std::cin >> response;
	} while (response != 'y' && response != 'Y' && response != 'n' && response != 'N');

	if (response == 'n' || response == 'N')
	{
		std::cout << "\n";
		return false;
	}
	else
	{
		std::cout << "\nGreat, we'll add that to the inventory." << std::endl;
		return true;
	}
}

void Product::PrintInformation()
{
	std::cout <<
		"Product Name: " << name <<
		"\n\tID: " << id <<
		"\n\tPrice: " << price <<
		"\n\tQuantity: " << quantityOnHand << std::endl;
}

void Product::AddItem()
{
	bool correct = true;

	do
	{
		// TODO: Check to make sure each input is a valid type
		std::cout << "Item name: ";
		std::cin >> name;

		std::cout << "ID: ";
		std::cin >> id;

		std::cout << "Price: ";
		std::cin >> price;

		std::cout << "Quantity: ";
		std::cin >> quantityOnHand;
		std::cout << "\n";

		correct = VerifyItemInfo();
	}
	while (!correct);
}
