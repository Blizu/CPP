// Exercise_3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

bool isPrime(int n);
void printDivisiors(int n);
int numDivisors(int n);
int gdc(int m, int n);
int phi(int n);

int main()
{
	std::cout << isPrime(10) << std::endl;
	std::cout << isPrime(11) << std::endl;

	printDivisiors(80);
	std::cout << std::endl << numDivisors(80) << std::endl;
	std::cout << gdc(12, 132) << std::endl;
	std::cout << phi(10) << std::endl;





}

bool isPrime(int n)
{
	if (n < 2)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

void printDivisiors(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			std::cout << i << " ";
		}
	}
}
int numDivisors(int n)
{
	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			res++;
		}
	}
	return res;
}
int gdc(int m, int n)
{
	while (m != n)
		if (m > n)
		{
			m -= n;
		}
		else
		{
			n -= m;
		}
	return n;

}

int phi(int n)
{
	int  result = 1;
	for (int i = 2; i < n; i++)
		if (gdc(i, n) == 1)
			result++;
	return result;
}