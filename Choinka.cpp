// Choinka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include <string>

using namespace std;

void rysuj(int liczba_pieter)
{
	string * pietra = new string[liczba_pieter];
	pietra[0] = "*";
	for (int i = 1; i < liczba_pieter; i++)
	{
		pietra[i] = pietra[i - 1] + "**";
	}

	int spacja = liczba_pieter;
	for (int i = 0; i < liczba_pieter; i++)
	{
		for (int j = spacja; j > 0; j--)
		{
			cout << " ";
		}
		cout << pietra[i] << endl;
		spacja--;
	}

	delete[] pietra;

	// podstawa dla drzewka:
	for (int i = 0; i < 1; i++)
	{
		for (int j = liczba_pieter; j > 0; j--)
		{
			cout << " ";
		}cout << "*";
	}
}

int main()
{
	int liczba_pieter;
	cin >> liczba_pieter;

	rysuj(liczba_pieter);
	return 0;
}