// Zadanie_3_ciagiZnakow.cpp : LudŸ daæ wyraz ja daæ d³ugoœæ XDDDD
//MAX 20 ZNAKOW

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	char ctab[21];
	unsigned int dlugosc = 0;

	cout << "Podaj ciag znakow ('/' konczy): ";
	for (int i = 0; i < 20; i++)
	{
		cin >> ctab[i];
		if (ctab[i] == '/')
		{
			ctab[i] = -52;
			break;
		}
	}

	for (int i = 0; i <= 20; i++)
	{
		if (ctab[i] == -52)
			break;
		else
			dlugosc++;
	}
	cout << "\nDlugosc to: " << dlugosc << endl << endl;

	system("pause");
	return 0;
}