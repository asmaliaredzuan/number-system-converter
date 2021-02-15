#include "BasetoDecimal.h"

int main()
{
	int baseType;
	char userChoice;
	do {
		cout << "Enter the base number system: ";
		cin >> baseType;

		BaseConverter(baseType);

		cout << "Would you like to convert another number? (y/n): ";
		cin >> userChoice;
		cout << endl;

	} while (userChoice != 'n' || userChoice != 'N');

	system("PAUSE");
	return 0;
} //End main
