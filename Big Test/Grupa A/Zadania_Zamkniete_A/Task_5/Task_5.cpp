#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	//Po następującym fragmencie programu:
	int& f1(int&);
	int* f2(int*);
	int  f3(int*);
	int	 f4(int&);
	int f5(int);
	int*(*f)(int*);

};

/*
 *	Możliwe jest przypisanie:
 *
 *	a) f=f4;
 *	b) f=f1;
 *	c) f=f2;
 *	d) f=f3;
 *	e) f=f5;
 *
 */