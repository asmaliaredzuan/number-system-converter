#ifndef DECIMALTOFINAL_H
#define DECIMALTOFINAL_H

#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

//Function to convert from decimal to desired base
void FinalConverter(int decimalInput, int finalBase)
{
	vector<char> finalOutput;
	int currOutput;
	while (decimalInput != 0)
	{
		currOutput = decimalInput % finalBase;
		if (currOutput < 10)
		{
			finalOutput.push_back(currOutput + 48); //+48 is to give proper char value for (0-9) on ascii table
		}
		else
		{
			finalOutput.push_back(currOutput + 55); //+55 is to give proper char value for (A-F) on ascii table
		}
		decimalInput /= finalBase;
	}

	for (auto reverseIter = finalOutput.rbegin(); reverseIter != finalOutput.rend(); reverseIter++)
		cout << *reverseIter;

	return;
}

#endif //DECIMALTOFINAL_H
