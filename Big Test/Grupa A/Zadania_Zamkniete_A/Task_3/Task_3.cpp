#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	//	Po następujących deklaracjach/definicjach:
	int i[10] = { 0 }, q = 1, *p = i;
	//	spośród instrukcji
	i[5] = p;		// 1
	q = i[5];		// 2
	p = &i[5];		// 3
	p[5] = i[6];	// 4
	*p[5] = 5;		// 5
};

/*
 *	Poprawnymi instrukcjami są tylko:
 *		
 *	a) 2,3,5
 *	b) 1,3,4
 *	c) 1,3,5
 *	d) 2,3,4
 *
 */