#ifndef CHECKVALIDINPUT_H
#define CHECKVALIDINPUT_H
#include <string>
using namespace std;

bool CheckValidInput(int baseType, string initialInput)
{
	for (int i = 0; i < initialInput.size(); i++)
	{
		initialInput[i] = toupper(initialInput[i]); //Added this line to convert lowercase characters to uppercase to check validity
		if (baseType < 10)
		{
			if (initialInput[i] - '0' >= baseType)
				return true;
		}
		
		else
		{
			if (initialInput[i] > baseType + 54)
				return false;
		}
	}
}

#endif //CHECKVALIDINPUT_H
