// Podstawy programowania 9.cpp : 

#include "pch.h"
#include <iostream>

int main()
{
	char t[8];
	for (int i = 0; i < 7; i++)
		std::cin >> t[i];
	std::cout << "\n";

	t[7] = 0;

	for (int i = 0; i < 8; i++)
		std::cout << t[i];
	std::cout << "\n";

	system("pause");
	return 0;
}