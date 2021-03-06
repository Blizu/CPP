// Exercise_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int* fun(int *tab1, int *tab2, int size) {
	int i, x, y, s1{}, s2{};
	for (i = 0; i < size; ++i) {
		x = tab1[i];
		y = tab2[i];
		tab1[i] = y;
		tab2[i] = x;
		s1 += y;
		s2 += x;

	}
	return s1 > s2 ? tab1 : tab2;

}

void printTable(int *tab, int size) {
	int i;
	for (i = 0; i < size; ++i) std::cout << tab[i] << " ";
	std::cout << std::endl;

}

int main() {
	int tab1[]{ 1,2,3 }, tab2[]{ 4,5,6 }, *tab3;

	std::cout << "tab1 przed: "; printTable(tab1, 3);
	std::cout << "tab2 przed: "; printTable(tab2, 3);
	tab3 = fun(tab1, tab2, 3);
	std::cout << "tab1    po: "; printTable(tab1, 3);
	std::cout << "tab2    po: "; printTable(tab2, 3);
	std::cout << "tab3      : "; printTable(tab3, 3);

}