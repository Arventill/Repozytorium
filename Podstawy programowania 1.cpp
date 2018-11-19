// Podstawy programowania 1.cpp : czynniki i podzielniki czy cos takiego
//

#include "pch.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void podzielniki(int);
void czynniki(int);

int main()
{
	int liczba;
	cout << "Podaj liczbe: "; cin >> liczba;
	cout << endl << "Podzielniki twojej liczby to: "; podzielniki(liczba);
	cout << endl << "Czynniki twojej liczby to: "; czynniki(liczba); cout << "1";
	return 0;
}

void podzielniki(int l)
{
	int zasieg = l;
	for (int i = 2; i <= zasieg; i++)
	{
		if (l % i == 0)
		{
			cout << i << ", ";
			continue;
		}
	}
}

void czynniki(int l)
{
	while (l>1)
	{
		for (int i = 2; i <= l; i++)
		{
			if (l % i == 0)
			{
				cout << i << " * ";
				l = l / i;
			}
		}
	}
}