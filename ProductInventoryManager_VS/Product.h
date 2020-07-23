#pragma once
#include <iostream>
#include <string>

class Product 
{
private:
	std::string name;
	int id;
	
	float price;
	int quantityOnHand;

	bool VerifyItemInfo();

public:
	void PrintInformation();
	void AddItem();

	float GetTotalPrice() { return price * quantityOnHand; }
	int GetID() { return id; }
};