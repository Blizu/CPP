// Exercise_1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int lastChar = -1;
	int countLastChar = 1;

	int maximalCharSequence = 0;
	int maxmalCountLastChar = 0;


	int command;
	
	do
	{
		std::cin >> command;
		if (command == lastChar)
		{
			countLastChar++;
		}
		else
		{
			if (countLastChar > maxmalCountLastChar)
			{
				maxmalCountLastChar = countLastChar;
				maximalCharSequence = lastChar;
			}
			lastChar = command;
			countLastChar = 1;

		}

	}
	while (command != 0);

	std::cout << "Najdluzsza sekwencja: " << maxmalCountLastChar << " razy liczba: " << maximalCharSequence << std::endl;;

	
	
}
