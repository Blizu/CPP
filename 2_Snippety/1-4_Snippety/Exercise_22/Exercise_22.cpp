// Exercise_22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int k;

int main() {
	using std::cout; using std::endl;
	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;

	int k = 10;

	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;

	::k = 1;

	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;

	{
		int k = 77;
		cout << "W bloku:" << endl;
		cout << "  k: " << k << endl;
		cout << "::k: " << ::k << endl;
	}

	cout << "Po bloku:" << endl;
	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;
}