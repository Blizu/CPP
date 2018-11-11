
#include "pch.h"
#include <iostream>

void Histo(int i, int b, int c);

int main()
{
	int	a, b, c;
    std::cout << "Podaj 3 nieujemne liczby: \n";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	if(a > 0 && b > 0 && c > 0)
	{
		Histo(a, b, c);
	}
	else
	{
		std::cout << "Liczby nie są dodatnie.\n";
	}
}
void Histo(int i, int b, int c)
{
	int hMax = i;
	if (b > hMax)
	{
		hMax = b;
	}
	if (c > hMax)
	{
		hMax = c;
	}
	for (int o = hMax; o > 0 ; o--)
	{
		if (i >= o)
		{
			std::cout << "* ";
		}
		else
		{
			std::cout << "  ";
		}

		if (b >= o)
		{
			std::cout << "* ";
		}
		else
		{
			std::cout << "  ";
		}
		
		if (c >= o)
		{
			std::cout << "* ";
		}
		else
		{
			std::cout << "  ";
		}
		std::cout << "\n";
	}
	

}



