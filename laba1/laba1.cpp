// laba1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Price.h"
#include "AlphabetSort.h"
#include "FindShop.h"
using namespace std;


int main()
{
	int size = 3;
	Price *P;
	P = new Price[size];
	AlphabetSort(P,size);
	cout << "SOrted aRRay!" << endl;
	for (int i=0;i<3;i++)
		P[i].show();
	FindShop(P,size);
	delete[] P;
	system("pause");
	return 0;
}

