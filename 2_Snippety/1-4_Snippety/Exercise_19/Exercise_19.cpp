// Exercise_19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main() {
	const char **v;
	const char *t[] = { "abcd", "efghi", "jklmno" };  
		v = t;                                           
	std::cout << "v           = " << v  << std::endl;
	std::cout << "v+2         = " << v + 2 << std::endl;
	std::cout << "v[2]        = " << v[2] << std::endl;
	std::cout << "*(v+2)      = " << *(v + 2) << std::endl;

	std::cout << "*(*(t+1)+2) = " << *(*(t + 1) + 2) << std::endl; 
	std::cout << "t[1][2]     = " << t[1][2] << std::endl;

	std::cout << "*(*(v+1)+2) = " << *(*(v + 1) + 2) << std::endl;
	std::cout << "v[1][2]     = " << v[1][2] << std::endl;

}
