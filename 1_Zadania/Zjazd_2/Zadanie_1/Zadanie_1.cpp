
#include "pch.h"
#include <iostream>

int main()
{
	int line;

	int counter = 1;
	int lastNumber = 0;

	std::cin >> line;
	lastNumber = line;
	int hightest;
	int lowest;

	do
	{
		std::cin >> line;
		if(lastNumber == line)
		{
			counter++;
		}
		else
		{
			lastNumber = line;
			counter = 1;
		}
	}
	while (line != 0);
}
