// Exercise_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {
	int k = 7, *p = &k, &refk = *p, m = 9;

	p = &m;
	k = 11;

	std::cout << "  *p = " << *p << std::endl;
	std::cout << "refk = " << refk << std::endl;

}