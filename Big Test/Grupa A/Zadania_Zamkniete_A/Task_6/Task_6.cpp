#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	//Po instrukcji:

	int k = 7, m, *p = &k;

	//Spośród instrukcji:

	p = &m; // (1)
	p = 5; // (2)
	*p = 5; // (3)
	m = *p; // (4)
};

/*
 *	Poprawne są wyłącznie:
 *
 *	a) (2), (3) i (4)
 *	b) żadna
 *	c) (1), (3) i (4)
 *	d) (1), (3)
 *	e) wszystkie
 *
 */
