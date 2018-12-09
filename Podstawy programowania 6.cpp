//Podstawy programowania 6.cpp : Zamiana liczby (10) na (2) na bitach

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <ctime>

int los();

int main(void)
{
	using std::cout;
	using std::endl;

	srand(time(NULL));

	int iliczba = los();
	cout << iliczba << endl;

	int licznik = 0;
	for (unsigned i = 2147483648; i > 0; licznik++, i >>= 1)
	{
		if (licznik == 4 || licznik == 8 || licznik == 12 || licznik == 16 || licznik == 20 || licznik == 24 || licznik == 28 || licznik == 32)
		{
			cout << " ";
		}
		if (iliczba & i)
			cout << "1";
		else
			cout << "0";
	}

	system("pause");
	return 0;
}

int los()
{
	return rand() % INT_MAX + 0;
}