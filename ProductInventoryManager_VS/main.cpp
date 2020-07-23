#include <iostream>
#include "Inventory.h"

int main()
{
	Inventory mainInventory;

	Product apples;
	apples.AddItem();

	Product bananas;
	bananas.AddItem();

	mainInventory.AddItemToInventory(apples);
	mainInventory.AddItemToInventory(bananas);

	mainInventory.PrintInventory();
	mainInventory.FindTotalValueOfInventory();

	return 0;
}