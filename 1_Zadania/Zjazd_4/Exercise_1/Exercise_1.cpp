#include "pch.h"
#include <iostream>
using namespace std;


template <typename T>
int maxIndex(const T* a, int size)
{
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > a[max])
			max = i;
	}
	return max;

}
int main()
{
	double ad[]{ 2.5, 9.1, 4.5, -1.0 };
	cout << "ad: " << maxIndex(ad, 4) << "; ";
	int ai[]{ 2, 11, 5, 1, 9 };
	cout << "ai: " << maxIndex(ai, 5) << "; ";
	string as[]{ "Ala", "Ela", "Ula", "Ola" };
	cout << "as: " << maxIndex(as, 4) << endl;

}

