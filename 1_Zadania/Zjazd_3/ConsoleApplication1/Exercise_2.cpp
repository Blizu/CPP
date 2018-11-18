
#include "pch.h"
#include <iostream>

using namespace std;

void zamien(double *a, double *b);
void ord3(double& a, double& b, double& c);
void ord3(double* a, double* b, double* c);
int main()
{

	double a, b, c, *ptrMin, *ptrMax;

	a = 2; b = 1; c = 3;
	ord3(a, b, c);
	cout << a << " " << b << " " << c << endl;

	a = 3; b = 2; c = 1;
	ord3(&a, &b, &c);
	cout << a << " " << b << " " << c << endl;

	//TODO:DOKONCZYC
	/*
	a = 2; b = 3; c = 1;
	ptrMin = ptrMax = nullptr;
	getMinMax(a, b, c, ptrMin, ptrMax);
	std::cout << "Min = " << *ptrMin << "; "
		<< "Max = " << *ptrMax << std::endl;
	a = 3; b = 1; c = 2;
	ptrMin = ptrMax = nullptr;
	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
	std::cout << "Min = " << *ptrMin << "; "
	*/
}

void ord3(double* a, double* b, double* c) {

	if (*a > *b)
		zamien(a, b);
	if (*a > *c)
		zamien(a, c);
	if (*b > *c)
		zamien(b, c);
}

void ord3(double& a, double& b, double& c) {

	double *aa = &a;
	double *bb = &b;
	double *cc = &c;

	if (*aa > *bb)
		zamien(aa, bb);
	if (*aa > *cc)
		zamien(aa, cc);
	if (*bb > *cc)
		zamien(bb, cc);
}

void zamien(double *a, double *b)
{
	double pom = *a;
	*a = *b;
	*b = pom;
}
