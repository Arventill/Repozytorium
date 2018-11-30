// Podstawy programowania 3.cpp : Losowanie liczby (2) i przerobienie jej na liczbe (10)

#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

char los();
int bin2dec(string); //funkcja przerabiajıca ułamek dziesiêtny na binarny (DEKLARACJA)

int main()
{
	srand(time(NULL));

	string dwojkowa;
	int i = 0, dziesietna = 0;
	do
	{
		dwojkowa += los();
		i++;
	} while (i != 8);
	dziesietna = bin2dec(dwojkowa);

	cout << "dwojkowo: " << dwojkowa << "\ndziesietnie:  " << dziesietna << endl;
	system("pause");
	return 0;
}

char los()
{
	int i = rand() % 2 + 0;
	char wynik;
	if (i == 0)
		wynik = '0';
	else
		wynik = '1';

	return wynik;
}

int bin2dec(string s)
{
	int podstawa = 2,
		potega = 0,
		wynik = 0,
		temp = 0;

	int dl = s.length();
	for (int i = dl - 1; i >= 0; i--)
	{
		temp = s[i] - 48;
		wynik += temp * pow(podstawa, potega);
		potega++;
	}
	return wynik;
}