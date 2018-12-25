// Zaliczenie_3+_wyrazWspak.cpp : LudŸ podaæ wyraz, ja go odwróciæ XD

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	char cwyraz[21];

	int literki = 0;
	cout << "Podaj wyraz (max 20 liter, '/' konczy): ";

	for (int i = 0; i < 20; i++)
	{
		cin >> cwyraz[i];
		if (cwyraz[i] == '/')
		{
			cwyraz[i] = -52;
			literki = i;
			break;
		}
		literki = i + 1;
	}
	char * cwynik = new char[literki];

	cwynik[literki] = '\0';
	for (int i = literki - 1, j = 0; i >= 0; i--, j++)
	{
		cwynik[j] = cwyraz[i];
	}
	cout << cwynik;

	system("pause");
	return 0;
}