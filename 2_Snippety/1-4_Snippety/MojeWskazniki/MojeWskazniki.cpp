// MojeWskazniki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{

	int a = 1;
	int b = 5;
	double c = 1.5;

	int *pa = &a;
	int *pb = &b;

	a++;
	// *pa++; nie wolno
	pb = pa;

	int o = 1;
	int *po = &o;
	int i = *po;
	o++;



	std::cout << "pa: " << pa << std::endl;
	std::cout << "*pa: " << *pa << std::endl;
	
	
	std::cout << "o: " << o << std::endl;
	std::cout << "i: " << i << std::endl;



}

