#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	const char* a = "UVWXYZ";
	cout << *(&a[3] - 2) << endl;
};

/*
 *	Jaką liczbe wydrukuje następujący fragment programu:
 *
 *	a) V
 *	b) W
 *	c) X
 *	d) U
 *	e) Y
 *
 */