#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	//	Po następujących deklaracjach/definicjach:
	struct Strudent
	{
		int oceny[10];
	};
	Strudent s[20];

	//Które z poniższych wyrażeń:

	s.Student[4].oceny[1];	// 1
	s[4].Student.oceny[1];	// 2
	Strudent.s[4].oceny[1];	// 3
	s.oceny[4][1];			// 4
	s.Student.oceny[4][1];	// 5
	s[4][1];				// 6
	s[4].oceny[1];			// 7
	s.oceny[1].Student[4];	// 8

};

/*
 *	Poprawnymi instrukcjami są tylko:
 *
 *	
 *
 */