
#include "pch.h"

#include <iostream>

double BMI(double meters, double kilos);

int main()
{
	double meters;
	double kilos;

    std::cout << "Podaj wzrost w metrach i wagę w kilogramach:\n";
	std::cin >> meters;
	std::cin >> kilos;
	std::cout << "Twoje BMI: " << BMI(meters, kilos);

}
 double BMI(double meters, double kilos)
{
	 return kilos / (meters * meters);
}
