// Exerise_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	auto k = 7;             // k jest typu int
	auto x = 1.;            // x jest typu double
	decltype(x) y = 7;      // y jest typu double, choć
							// '7' jest literałem typu int
	decltype(k*x) z = 7;    // iloczyn k*x jest typu double

	std::cout << "k/2=" << k / 2 << ", y/2=" << y / 2
		<< ", z/2=" << z / 2 << std::endl;
}
