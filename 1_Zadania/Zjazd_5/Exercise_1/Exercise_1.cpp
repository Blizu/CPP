#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <functional>
using namespace std;

template <typename T, typename FUN>
size_t part(T* arr, size_t size, FUN f) {
	// ...
}

template <typename T>
void printTab(const T* t, size_t size) {
	// ...
}

bool isEven(int e) { return e % 2 == 0; }

int main() {

	size_t ind = 0;

	int a1[] = { 1,2,3,4,5,6 };
	ind = part(a1, 6, isEven);
	cout << "ind = " << ind << " ";
	printTab(a1, 6);

	int a2[] = { 1,2,3,4,5,6 };
	// lambda as argument: a predicate checking
	// if the given number is odd
	ind = part( /* ... */);
	cout << "ind = " << ind << " ";
	printTab(a2, 6);

	double a3[] = { -1.5,2.5,3.5,6.5,4.5,0 };
	double mn = 2.0;
	double mx = 5.0;
	// lambda as argument: a predicate checking
	// if the given number is in the range [mn,mx]
	ind = part( /* ... */);
	cout << "ind = " << ind << " ";
	printTab(a3, 6);

	constexpr size_t DIM = 500000;
	int* a4 = new int[DIM];
	srand(unsigned(time(0)));
	for (size_t i = 0; i < DIM; ++i) a4[i] = rand() % 21 + 1;
	// lambda as argument: a predicate checking
	// if the given number is divisible by 7
	ind = part( /* ... */);
	cout << "ind = " << ind << endl;
	delete[] a4;
}