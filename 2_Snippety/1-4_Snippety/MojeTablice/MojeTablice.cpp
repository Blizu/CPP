// MojeTablice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int tab[] = { 11,22,33,44,55 }, i = 3, *p, *q;

	p = &tab[0] + 3;
	cout << "*p     = " << *p << endl;

	p = p - 2;
	cout << "*p     = " << *p << endl;

	q = tab;

	cout << "q = " << q << endl;
	cout << "tab = " << tab << endl;
	cout << "tab[0] = " << &tab[0] << endl;

	cout << "*(q+2) = " << *(q + 2) << endl;
	cout << "q[2]   = " << q[2] << endl;

	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl;
	cout << "4[q]   = " << 4[q] << endl;
	cout << "3[q]   = " << 3[q] << endl;
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
