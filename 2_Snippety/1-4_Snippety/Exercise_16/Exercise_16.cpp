// Exercise_16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void napisz(const char* tab) {
	std::cout << "Napis: " << tab << std::endl;

}

int main() {
	char  tab1[] = "Kasia";
	char  tab2[] = { 'B', 'a', 's', 'i', 'a', '\0' };
	const char *tab3 = "Wisia";
	std::cout << "Wymiar    tab1: " << sizeof(tab1) << std::endl;
	std::cout << "Wymiar    tab2: " << sizeof(tab2) << std::endl;
	std::cout << "Wymiar    tab3: " << sizeof(tab3) << std::endl;
	std::cout << "Wymiar \'Wisia\': " << sizeof("Wisia") << std::endl;

	tab1[0] = 'B';
	tab2[0] = 'K';
	//tab3[0] = 'C'; // ŹLE

	napisz(tab1);
	napisz(tab2);
	napisz(tab3);

}