#pragma once
#include "stdafx.h"


using namespace std;

class Price
{
private:
	string ProductName;
	string ShopName;
	int Cost;
public:
	Price();
	Price(const Price& P);
	~Price();
	void show();
	void ShowProductAndCost();
	string getProductName();
	string getShopName(); 
	void ShowProduct();
	void ShowCost();
	Price& operator=(Price& P);


};
