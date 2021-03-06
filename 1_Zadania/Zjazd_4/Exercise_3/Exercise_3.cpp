#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
template <typename T>
void getPivots(const T* arr, int* info, size_t size)
{
	if (arr[0] <= arr[1])
	{
		info[0] = 1;
	}
	else
	{
		info[0] = 0;
	}

	for (int i = 1; i < (size - 1); i++)
	{
		if (arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])
		{
			info[i] = 1;
		}
		else
		{
			info[i] = 0;
		}
	}

	if (arr[size] >= arr[size-1])
	{
		info[size] = 1;
	}
	else
	{
		info[size] = 0;
	}
}
template <typename T>
std::vector<int> getPivots(std::vector<T>& v) {
	if (arr[0] <= arr[1])
	{
		info[0] = 1;
	}
	else
	{
		info[0] = 0;
	}

	for (int i = 1; i < (size - 1); i++)
	{
		if (arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])
		{
			info[i] = 1;
		}
		else
		{
			info[i] = 0;
		}
	}

	if (arr[size] >= arr[size - 1])
	{
		info[size] = 1;
	}
	else
	{
		info[size] = 0;
	}
}

template <typename T>
void print(const T* arr, const int* info, size_t size) {
	// ...
}

int main() {
	int a[] = { 1, 2, 1, 2, 2, 5 };
	constexpr size_t size = std::size(a);
	int info[size];
	getPivots(a, info, size);
	print(a, info, size);

	std::vector<std::string> v{ "A", "B", "A", "B", "B", "E" };
	std::vector<int> res = getPivots(v);
	print(v.data(), res.data(), v.size());
}