// Exercise_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	unsigned long int ul1 = 13UL;
	unsigned long     ul2 = 0xD;  // 13 szesnastkowo
	signed   short    ss1 = 015;  // 13 ósemkowo
	short             ss2 = 13;   // 13 dziesiętnie
	unsigned char     aa1 = 65;
	signed   char     aa2 = 'A';  // ASCII('A') = 65
	int               aa3 = 65;
	int               aa4 = 'A';
	char              aa5 = '\101';   // 65 ósemkowo
	char              aa6 = '\x41';   // 65 szesnastkowo
	cout << aa1 << " " << aa2 << endl;
	cout << aa3 << " " << aa4 << endl;
	cout << aa5 << " " << aa6 << endl;

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
