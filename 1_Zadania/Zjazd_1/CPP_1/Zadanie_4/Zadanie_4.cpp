
#include "pch.h"
#include <iostream>

#define POL
//#define ENG

int suma(int num);

int main()
{
#if ! defined (POL) && !defined (ENG)
	#error Wybierz jedno.
#endif
#if  defined (POL) && defined (ENG)
	#error Wybierz jedno.
#endif
	int res;
	int max = 0;
	int sum = 0;

	do
	{
		

#ifdef POL 
    std::cout << "enter a natural number (0 if done): ";
	std::cin >> res;
	if(suma(res) > sum)
	{
		sum = suma(res);
		max = res;
	}
	std::cout << "\n";
#endif
#ifdef ENG
	std::cout << "wprowadz naturalna liczbe (0 aby zakończyć): ";
	std::cin >> res;
	if (suma(res) > sum)
	{
		sum = suma(res);
		max = res;
	}
	std::cout << "\n";
#endif
	} while (res != 0);
#ifdef ENG
	std::cout << "Max sum of digits was " << sum << " for " << max << "\n";
#endif
#ifdef POL
	std::cout << "Maxymalna suma cyfr to " << sum << " dla " << max << "\n";
#endif
}
int suma(int num)
{
	int wynik = 0;
	do
	{
		wynik = wynik + num % 10;
		num = num / 10;
	} while (num != 0);
	return wynik;
}
