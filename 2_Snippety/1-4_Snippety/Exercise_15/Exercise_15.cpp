// Exercise_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
int main() {
	// starszy bajt: 'a'; młodszy bajt: 'b'
	short sh = 'b' + 256 * 'a';

	void *v = static_cast<void*>(&sh);
	char *c = static_cast<char*>(v);
	std::cout << "Kolejność w pamięci: najpierw "
		<< c[0] << " potem " << c[1] << std::endl;
}
