// Exercise_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	long double ld = 0;
	std::string      st = "Hermenegilda";
	short       sh = 0;
	long       *lo = nullptr;
	std::cout << "long double: " << sizeof ld << std::endl;
	std::cout << "double     : " << sizeof(double) << std::endl;
	std::cout << "float      : " << sizeof(float) << std::endl;
	std::cout << "long long  : " << sizeof(long long) << std::endl;
	std::cout << "long       : " << sizeof(long) << std::endl;
	std::cout << "int        : " << sizeof(int) << std::endl;
	std::cout << "short      : " << sizeof sh << std::endl;
	std::cout << "char       : " << sizeof(char) << std::endl;
	std::cout << "wchar_t    : " << sizeof(wchar_t) << std::endl;
	std::cout << "char16_t   : " << sizeof(char16_t) << std::endl;
	std::cout << "char32_t   : " << sizeof(char32_t) << std::endl;
	std::cout << "bool       : " << sizeof(bool) << std::endl;
	std::cout << "string     : " << sizeof st << std::endl;
	std::cout << "long*      : " << sizeof lo << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
