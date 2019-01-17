// Exercise_23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int stat = 10;

void fun() {
	static int stat;
	cout << "local  stat " << stat++ << endl;
	cout << "global stat " << ::stat << endl;
	{
		static int stat;
		cout << "block  stat " << stat--
			<< "\n\n";
	}
}

int main() {
	fun();
	fun();
	fun();
}
/*    stat lokalne  0
    stat globalne 10
    stat w bloku  0

    stat lokalne  1
    stat globalne 10
    stat w bloku  -1

    stat lokalne  2
    stat globalne 10
    stat w bloku  -2
*/