// Exercise_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {
	double x, y, *pmin, *pmax;
	std::cout << "Podaj dwie liczby: ";
	std::cin >> x >> y;
	if (x < y) {
		pmin = &x; pmax = &y;
	}
	else {
		pmin = &y; pmax = &x;
	}
	std::cout << "Min = " << *pmin << std::endl;
	std::cout << "Max = " << *pmax << std::endl;

}
