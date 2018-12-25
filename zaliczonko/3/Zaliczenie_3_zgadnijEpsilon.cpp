// Zaliczenie_3_zgadnijEpsilon.cpp : LudŸ zgaduje wylosowan¹ liczbê

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int losowanko();

int main()
{
	using namespace std;

	unsigned int epsilon;
	unsigned int proby = 0;
	unsigned int propozycja;
	bool petla = true;

	srand(time(NULL));

	epsilon = losowanko();
	cout << "Witaj!\nSprobuj odgadnac liczbe wylosowana przez komputer!\n\n";
	while (petla)
	{
		proby++;
		cout << "Twoja propozycja: "; cin >> propozycja;
		if (cin.good() == 0 || (signed int)propozycja < 0)
		{
			cout << "Prosze podac liczbe dodatnia!\n\n";
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}

		if (propozycja > epsilon)
			cout << "Komputer wybral mniejsza liczbe!\nSprobuj ponownie!\n\n";
		else if (propozycja < epsilon)
			cout << "Komputer wybral wieksza liczbe!\nSprobuj ponownie!\n\n";
		else if (propozycja == epsilon)
			petla = false;
		else
			cout << "Wystapil nieoczekiwany blad, sprobuj jeszcze raz!\n\n";
	}
	cout << "Tak to wlasnie ta liczba! Udalo ci sie to osiagnac po " << proby << " probach!\n\n";

	system("pause");
	return 0;
}

int losowanko()
{
	return rand() % 100 + 1;
}