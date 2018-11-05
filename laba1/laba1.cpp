#include "stdafx.h"
#include "Price.h"
#include "Container.h"
using namespace std;

int main()
{
	Container C;
	cout << "____________________________________________________________________________________" << endl;
	cout << " Press 1 to show sorted array \n Press 2 to find shop \n Press 3 to add \n Press 4 to use delete \n Press 5 to exit" << endl;
	
	while (true)
	{
		switch (getchar())
		{
		case '1':
			
				if (C.getSize() == 0)
					cout << "Error: Can't sort empty Container!" << endl;
				else 
				{

					C.AlphaberSort();
					cout << "SOrted aRRay!" << endl;
					C.showContainer();
					cout << "____________________________________________________________________________________" << endl;
				}
					
			
			break;
		case '2':
		{
			string name;
			cout << "Enter the name of the shop to find:";
			cin >> name;
			Container* subC(C.FindShop(name));
			if (subC->isEmpty())
				cout << "Nothing was found!"<<endl;
			else subC->showContainer();
			delete subC;
			cout << "____________________________________________________________________________________" << endl;
			break;
		}
		case '3':
		{
			Price* P = new Price;
			C += P;
			break;
		}
		
		case '4':

			int check_size;
			check_size=(C.getSize()) - 1;
			if (check_size < 0)
				cout << "Size of Container can't be below zero! \n Operator -- failed" << endl;
			else --C;
			cout << "____________________________________________________________________________________" << endl;
		break;
		
		case '5':
			cout << "Esc" << endl;
			exit(EXIT_SUCCESS);
			break;
		}


	}

	system("pause");
	return 0;
}

