// Exercise_25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int fun(const int * pi) {
	//*pi = 2 * (*pi); // NIE !!!
	return *pi;
}

int main() {
	int i = 2;
	int res = fun(&i);
	cout << "res = " << res << endl;
}