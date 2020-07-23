#include "Inventory.h"

void Inventory::AddItemToInventory(const Product product)
{
	productInventory.push_back(product);
}

void Inventory::PrintInventory()
{
	std::cout << "Here is the inventory:\n" << std::endl;

	for (int i = 0; i < productInventory.size(); i++)
	{
		productInventory[i].PrintInformation();
		std::cout << "\n";
	}

	std::cout << "That is every inventory item." << std::endl;
}

void Inventory::FindTotalValueOfInventory()
{
	float sum = 0;

	for (int i = 0; i < productInventory.size(); i++)
	{
		sum += productInventory[i].GetTotalPrice();
	}

	std::cout << "The inventory is worth: " << sum << " dollars." << std::endl;
}
