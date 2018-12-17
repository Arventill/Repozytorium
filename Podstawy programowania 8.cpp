// Podstawy programowania 8.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>

int main()
{
	for (int i = 0, j = 128; i < 128; i++, j++)
	{
		std::cout << i << ": " << (char)i << "\t" << j << ": " << (char)j << std::endl;
	}
	system("pause");
	return 0;
}