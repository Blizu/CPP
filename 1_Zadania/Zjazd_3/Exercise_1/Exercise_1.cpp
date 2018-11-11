// Exercise_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int gcdRec(int a, int b);
int sumDigits(int n);
int numDigits(int n);
void printOddEven(int n);
void hailstone(int n);

int main() {

	std::cout << "gcdRec(12, 42) = " <<
		gcdRec(12, 42) << std::endl
		<< "gcdRec(12, 25) = " <<
		gcdRec(12, 25) << std::endl;


	std::cout << "sumDigits(123) = " <<
		sumDigits(123) << std::endl
		<< "sumDigits(971) = " <<
		sumDigits(971) << std::endl;

	std::cout << "numDigits(12345) = " <<
		numDigits(12345) << std::endl
		<< "numDigits(971) = " <<
		numDigits(971) << std::endl;
	std::cout << "printOddEven(15): ";

	printOddEven(15);
	std::cout << std::endl;
	std::cout << "printOddEven(14): ";

	printOddEven(14);
	std::cout << std::endl;
	std::cout << "hailstone(13): ";

	hailstone(13);
	std::cout << std::endl;
}
int gcdRec(int a, int b)
{
	if (a != b)
		return gcdRec(a > b ? a - b : a, b > a ? b - a : b);
	return a;
}
int sumDigits(int n)
{
	if (n > 0)
		return n % 10 + sumDigits(n / 10);
	return 0;
}
int numDigits(int n)
{
	if (n > 0)
	{
		return 1 + numDigits(n / 10);
	}
	return 0;
}
void printOddEven(int n)
{
	if (n % 2 == 0)
	{
		if (n <= 2)
			return;
		std::cout << (n - 2); std::cout << ", ";
		printOddEven(n - 2);
	}
	else
	{
		if (n <= 1)
			return;
		std::cout << (n - 2); std::cout << ", ";
		printOddEven(n - 2);
	}
}
void hailstone(int n)
{
	if (n == 2)
	{
		std::cout << 1; std::cout << ", ";
		return;
	}

	std::cout << n; std::cout << ", ";
	if (n % 2 == 0)
	{
		if (n / 2 != 1)
		{
			hailstone(n / 2);
		}
		return;
	}
	if (3 * n + 1 != 4)
	{
		hailstone(3 * n + 1);
	}

}
