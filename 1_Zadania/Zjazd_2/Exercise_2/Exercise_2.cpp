
#include "pch.h"
#include <iostream>

bool isPrime(int n);		
void printDivisors(int n);
//int numDivisors(int n);	
//int phi(int n);

int main()
{
	std::cout << isPrime(10) << std::endl;
	std::cout << isPrime(11) << std::endl;




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

void printDivisors(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			std::cout << i << " ";
		}
	}
}