// Exercise_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

enum dni { pon, wto = 0, sro = 0, czw = 0, pia = 0, sob, nie };

void info(dni day) {
	static string  typDnia[] = { " powszedni","sobotni", "swiateczny" };
	int stawka = 200 * (1 + day);
	cout << "Dzień " << typDnia[day] << ". " <<endl;
	cout << "Stawka wynosi: " << stawka << " PLN\n"<<endl;

}

int main() {
	info(pon);

	dni dzien = sob;
	info(dzien);

	dzien = nie;
	info(dzien);

}
