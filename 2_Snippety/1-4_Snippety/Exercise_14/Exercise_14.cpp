// Exercise_14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {
	int tab[] = { 11,22,33,44,55 }, i = 3, *p, *q;

	p = &tab[0] + 3;
	std::cout << "*p     = " << *p << std::endl;

	p = p - 2;
	std::cout << "*p     = " << *p << std::endl;

	q = tab;
	std::cout << "*(q+2) = " << *(q + 2) << std::endl;
	std::cout << "q[2]   = " << q[2] << std::endl;

	std::cout << "q[i]   = " << q[i] << std::endl;
	std::cout << "i[q]   = " << i[q] << std::endl;

}
