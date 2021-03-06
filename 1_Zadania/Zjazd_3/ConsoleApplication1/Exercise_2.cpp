#include "pch.h"
#include <iostream>

using namespace std;

void swap(double *a, double *b);
void ord3(double& a, double& b, double& c);
void ord3(double* a, double* b, double* c);
void getMinMax(double &a, double& b, double& c, double*& ptrMin, double*& ptrMax);
void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax);

int main()
{
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
	cout << "Min = " << *ptrMin << "; "
		<< "Max = " << *ptrMax << endl;
	a = 3; b = 1; c = 2;
	ptrMin = ptrMax = nullptr;
	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
	cout << "Min = " << *ptrMin << "; "
		<< "Max = " << *ptrMax << endl;
}

void ord3(double* a, double* b, double* c) {

	if (*a > *b)
		swap(a, b);
	if (*a > *c)
		swap(a, c);
	if (*b > *c)
		swap(b, c);
}

void ord3(double& a, double& b, double& c) {

	double *aa = &a;
	double *bb = &b;
	double *cc = &c;

	if (*aa > *bb)
		swap(aa, bb);
	if (*aa > *cc)
		swap(aa, cc);
	if (*bb > *cc)
		swap(bb, cc);
}

void swap(double *a, double *b)
{
	double pom = *a;
	*a = *b;
	*b = pom;
}

void getMinMax(double &a, double& b, double& c, double*& ptrMin, double*& ptrMax) {
	ptrMin = &a;
	if (b < a) {
		ptrMin = &b;
	}
	if (c < a) {
		ptrMin = &c;
	}

	ptrMax = &a;
	if (b > a) {
		ptrMax = &b;
	}
	if (c > a) {
		ptrMax = &c;
	}
}

void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax) {
	*ptrMin = &*a;
	if (*b < **ptrMin) {
		*ptrMin = &*b;
	}
	if (*c < **ptrMin) {
		*ptrMin = &*c;
	}

	*ptrMax = &*a;
	if (*b > **ptrMax) {
		*ptrMax = &*b;
	}
	if (*c > **ptrMax) {
		*ptrMax = &*c;
	}
}
