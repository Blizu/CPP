#include "pch.h"
#include <iostream>

using namespace std;


int gcdRec(int a, int b);
int sumDigits(int n);
int numDigits(int n);
void printOddEven(int n);
void hailstone(int n);

int main() {
	cout << "gcdRec(12, 42) = " <<
		gcdRec(12, 42) << endl
		<< "gcdRec(12, 25) = " <<
		gcdRec(12, 25) << endl;


	cout << "sumDigits(123) = " <<
		sumDigits(123) << endl
		<< "sumDigits(971) = " <<
		sumDigits(971) << endl;

	cout << "numDigits(12345) = " <<
		numDigits(12345) << endl
		<< "numDigits(971) = " <<
		numDigits(971) << endl;
	cout << "printOddEven(15): ";

	printOddEven(15);
	cout << endl;
	cout << "printOddEven(14): ";

	printOddEven(14);
	cout << endl;
	cout << "hailstone(13): ";

	hailstone(13);
	cout << endl;
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
		cout << (n - 2); cout << ", ";
		printOddEven(n - 2);
	}
	else
	{
		if (n <= 1)
			return;
		cout << (n - 2); cout << ", ";
		printOddEven(n - 2);
	}
}
void hailstone(int n)
{
	if (n == 2)
	{
		cout << 1; cout << ", ";
		return;
	}

	cout << n; cout << ", ";
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
