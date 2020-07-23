#pragma once
#include <vector>
#include "Product.h"

class Inventory
{
private:
	std::vector<Product> productInventory;

public:
	void AddItemToInventory(const Product product);
	void PrintInventory();
	void FindTotalValueOfInventory();
};