// Exercise_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


int main() {
	int k = 5;
	int &refk = k;

	std::cout << "refk = " << refk << std::endl;
	std::cout << "   k = " << k << std::endl;

	k = 7;

	std::cout << "refk = " << refk << std::endl;
	std::cout << "   k = " << k << std::endl;

	refk = 9;

	std::cout << "refk = " << refk << std::endl;
	std::cout << "   k = " << k << std::endl;

}