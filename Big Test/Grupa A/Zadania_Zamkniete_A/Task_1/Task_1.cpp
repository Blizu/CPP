#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	int n = 2, *pn = &n, k = *pn + 1, &rk = k;
	--k;
	cout << --rk << endl;
};

/*
 *	Spowoduje wypisanie:
 *	
 *	a) liczby 2
 *	b) fragment nie skompiluje się
 *	c) liczby 1
 *	d) adresu zmiennej rk
 *	e) liczby 3
 *	
 */

