#include "pch.h"
#include <iostream>

void merge(const int* a, size_t dima, const int* b, size_t dimb, int* c);
void printArr(const int* a, size_t dima, const char* m);

int main() 
{
	int a[] = { 1,4,4,5,8 };
	int b[] = { 1,2,2,4,6,6,9 };
	constexpr size_t dima = std::size(a);
	constexpr size_t dimb = std::size(b);
	constexpr size_t dimc = dima + dimb;
	int c[dimc];

	merge(a, dima, b, dimb, c);

	printArr(a, dima, "a");
	printArr(b, dimb, "b");
	printArr(c, dimc, "c");
}

void merge(const int* a, size_t dima, const int* b, size_t dimb, int* c) 
{
	int i = 0, j = 0, k = 0;
	while (i < dima && j < dimb) {
		if (*(a + i) <= *(b + j))
			*(c + k++) = *(a + i++);
		else *(c + k++) = *(b + j++);
	}
	while (i < dima)
		*(c + k++) = *(a + i++);
	while (j < dimb)
		*(c + k++) = *(b + j++);
}

void printArr(const int* a, size_t dima, const char* m) {
	std::cout << m << " [ ";
	for (size_t i = 0; i < dima; ++i)
		std::cout << a[i] << " ";
	std::cout << "]\n";
}