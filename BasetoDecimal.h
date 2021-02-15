#ifndef BASETODECIMAL_H
#define BASETODECIMAL_H
#include "DecimaltoFinal.h"
#include "CheckValidInput.h"

//Function to convert from initial base to decimal
void BaseConverter(int baseType)
{
	string initialInput;
	int finalBase, decimalOutput = 0;
	cout << "Enter the target number system: ";
	cin >> finalBase;
	cout << "Enter the value in base: ";
	cin.ignore();
	getline(cin, initialInput);

	if (CheckValidInput(baseType, initialInput)==0)
	{
		//Find decimal value of the base input
		for (int i = 0; i < initialInput.size(); i++)
		{
			char currChar = initialInput[i];
			switch (currChar)
			{
			case '0':
				break;
			case '1':
				decimalOutput += pow(baseType, initialInput.size() - 1 - i);
				break;
			case '2':
				decimalOutput += 2 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '3':
				decimalOutput += 3 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '4':
				decimalOutput += 4 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '5':
				decimalOutput += 5 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '6':
				decimalOutput += 6 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '7':
				decimalOutput += 7 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '8':
				decimalOutput += 8 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case '9':
				decimalOutput += 9 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case 'a': case 'A':
				decimalOutput += 10 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case 'b': case 'B':
				decimalOutput += 11 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case 'c': case 'C':
				decimalOutput += 12 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case 'd': case 'D':
				decimalOutput += 13 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case 'e': case 'E':
				decimalOutput += 14 * pow(baseType, initialInput.size() - 1 - i);
				break;
			case 'f': case 'F':
				decimalOutput += 15 * pow(baseType, initialInput.size() - 1 - i);
				break;
			default:
				cout << "Your entry is incorrect.\n";
			}
		}

		cout << initialInput << " in base " << baseType << " is equal to ";

		//Function to convert from decimal to desired base
		FinalConverter(decimalOutput, finalBase);

		cout << " in base " << finalBase << ".\n";
		return;
	}
	else 
		cout << "Your entry is incorrect.\n";
}

#endif //BASETODECIMAL_H
