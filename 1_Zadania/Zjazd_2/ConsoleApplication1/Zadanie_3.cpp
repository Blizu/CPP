// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//Coś w tym zadaniu nie halo było
 double* aver(const double* arr, size_t size, double& average)
{
	using std::cout; using std::endl;
	double zmienna = 0;
	double szukana = 0;
	double delta = 0;

	for (unsigned int i = 0; i < size; ++i)
	{
		zmienna += arr[i];
	}
	average = zmienna / size;

	for (unsigned int i = 0; i < size; ++i)
	{
		if(average - arr[i] < delta )
		{
			szukana = arr[i];
		}
	}
	
	return &szukana;
}

int main() 
{
	using std::cout; using std::endl;
	double arr2[] = { 4,5,2,1,1,2,5,3,8,7,5,4 };
	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);
	double average2 = 0; double* p2 = aver(arr2, size2, average2);
	cout << *p2 << " " << average2 << endl;

	double arr[] = { 1,7,5,4,3,2 }; 
	size_t size = sizeof(arr) / sizeof(arr[0]); 
	double average = 0; double* p = aver(arr, size, average); 
	cout << *p << " " << average << endl;
}


