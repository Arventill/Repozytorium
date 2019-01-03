// Zaliczenie_5_String.cpp : TWczytanie 5 stringów getlinem
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "C.UTF-8"); //Nie tylko wyœwietlanie, ale i pobieranie polskich znaków (nie dziêkujcie XD)

	std::string a[5];

	for (int i = 0; i < 5; i++)
	{
		std::getline(std::cin, a[i]);
	} std::cout << "\n";

	for (int i = 0; i < 5; i++)
	{
		std::cout << a[i] << "\n";
	}

	system("pause");
	return 0;
}