
#include "pch.h"
#include <iostream>
#define GETMAX
#define  GETMIN
int main()
{
	int a;
	int b;
	int c;
	const int size = 3;

    std::cout << "Wpisz 3 liczby: \n";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	int tab [size] = { a,b,c };



#if !defined (GETMAX) && !defined (GETMIN)
#error kompilacja przerwana.
#endif




#ifdef GETMAX
	int result = tab[0];
	for (int i = 0; i < size; i++)
	{
		if(tab[i] > result)
		{
			result = tab[i];
		}
	}
	std::cout << "GETMAX: " << result << "\n";
#endif

#ifdef GETMIN
	int result2 = tab[0];
	for (int i = 0; i < size; i++)
	{
		if (tab[i] < result)
		{
			result = tab[i];
		}
	}
	std::cout << "GETMIN: " << result << "\n";
#endif
}
