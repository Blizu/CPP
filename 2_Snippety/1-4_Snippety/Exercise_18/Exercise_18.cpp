// Exercise_18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


void zamien(int* tab[], int w1, int w2, int dim1, int dim2) {
	for (int k = 0; k < dim2; k++) {
		int t = tab[w1][k];
		tab[w1][k] = tab[w2][k];
		tab[w2][k] = t;

	}

}

void printTable(int* tab[], int dim1, int dim2) {
	for (int w = 0; w < dim1; w++) {
		for (int k = 0; k < dim2; k++)
			std::cout << tab[w][k] << " ";
		std::cout << std::endl;

	}

}

int main() {
	int tt[3][4] = { {1,2,3,4}, {7,6}, {1} };

	const int dim1 = 3;
	const int dim2 = 4;

	int* tab[dim1];
	for (int i = 0; i < dim1; i++)
		tab[i] = tt[i];

	std::cout << "Przed:\n"; printTable(tab, dim1, dim2);
	zamien(tab, 0, 1, dim1, dim2);
	std::cout << "Po:\n";    printTable(tab, dim1, dim2);

}
