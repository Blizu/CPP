// Exercise_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void fun1(double tab[]) {
	std::cout << "Wymiar \'tab\' w fun1: " << sizeof(tab) << std::endl;
	std::cout << "Wartosc *tab w fun1: " << tab[0] << std::endl;

}

void fun2(double* tab) {
	std::cout << "Wymiar \'tab\' w fun2: " << sizeof(tab) << std::endl;
	std::cout << "Wartosc *tab w fun2: " << tab[0] << std::endl;

}
int main() {
	double tab[] = { 6,2,3,2,1 };
	std::cout << "Wymiar \'tab\' w main: " << sizeof(tab) << std::endl;
	std::cout << "Wartosc *tab w main: " << *tab << std::endl;
	fun1(tab);
	fun2(tab);

}