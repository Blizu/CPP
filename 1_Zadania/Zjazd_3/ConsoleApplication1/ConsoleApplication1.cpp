

#include "pch.h"

#include <iostream>
#include <utility> // you can use std::swap

void getMinMax(double &a, double& b, double& c,
	double*& ptrMin, double*& ptrMax) {
	// ...
}
void getMinMax(double *a, double* b, double* c,
	double** ptrMin, double** ptrMax) {
	// ...
}
void ord3(double& a, double& b, double& c) {
	// ...
}
void ord3(double* a, double* b, double* c) {
	// ...
}
int main() {
	using std::cout; using std::endl;
	double a, b, c, *ptrMin, *ptrMax;
	a = 2; b = 1; c = 3;
	ord3(a, b, c);
	cout << a << " " << b << " " << c << endl;
	a = 3; b = 2; c = 1;
	ord3(&a, &b, &c);
	cout << a << " " << b << " " << c << endl;
	a = 2; b = 3; c = 1;
	ptrMin = ptrMax = nullptr;
	getMinMax(a, b, c, ptrMin, ptrMax);
	std::cout << "Min = " << *ptrMin << "; "
		<< "Max = " << *ptrMax << std::endl;
		a = 3; b = 1; c = 2;
	ptrMin = ptrMax = nullptr;
	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
	std::cout << "Min = " << *ptrMin << "; "
		<< "Max = " << *ptrMax << std::endl;
}

