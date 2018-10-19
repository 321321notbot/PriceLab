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
			C.AlphaberSort();
			cout << "SOrted aRRay!" << endl;
			C.showContainer();
			cout << "____________________________________________________________________________________" << endl;
			break;
		case '2':
			try
			{
				if (!C.FindShop())
					throw false;
			}
			catch (bool result)
			{
				cout << "No Shops with this name!" << endl;
			}
			cout << "____________________________________________________________________________________" << endl;
			break;
		case '3':
			++C;
			cout << "____________________________________________________________________________________" << endl;
			break;
		case '4':
			--C;
			cout << "____________________________________________________________________________________" << endl;

		break;
		
		case '5':
			cout << "Esc" << endl;
			exit(EXIT_SUCCESS);
		}


	}

	system("pause");
	return 0;
}

