#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	//Jeśli funckja F ma deklarację 'void F(int& n);', ap jest typu int*, to wywolanie tej funkcji
	//może mieć postać:

	//void F(int& n);
	//int* p;

	F(*p);	// 1
	F(p&);	// 2
	F(p*);	// 3
	F(p);	// 4
	F(&p);	// 5
			
};

/*
 *
 *	a) 1
 *	b) 2
 *	c) 3
 *	d) 4
 *	e) 5
 *
 */