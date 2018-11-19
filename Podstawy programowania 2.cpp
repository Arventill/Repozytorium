// Podstawy programowania 2.cpp : bin2dec dec2bin
//

#include "pch.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int bin2dec(string);
string dec2bin(int);

int main()
{
	setlocale(LC_ALL, "");

	int dziesietna, wynik_bin;
	string dwojkowa, wynik_dec;

	cout << "Podaj liczbê w systemie dwójkowym: "; cin >> dwojkowa;			// dwójkowa na dziesiêtn¹
	wynik_bin = bin2dec(dwojkowa);											// dwójkowa na dziesiêtn¹
	cout << wynik_bin << endl << endl;										// dwójkowa na dziesiêtn¹
	// ------------------------------------------------------------------------------------------------ //
	cout << "Podaj liczbe w systemie dziesietnym: "; cin >> dziesietna;		// dziesiêtna na dwójkow¹
	wynik_dec = dec2bin(dziesietna);										// dziesiêtna na dwójkow¹
	cout << wynik_dec << endl << endl;										// dziesiêtna na dwójkow¹

	system("pause");
	return 0;
}

int bin2dec(string s)
{
	int podstawa = 2, potega = 0, wynik = 0, temp = 0;

	int dl = s.length();
	for (int i = dl - 1; i >= 0; i--)
	{
		temp = s[i] - 48;
		wynik += temp * pow(podstawa, potega);
		potega++;
	}
	return wynik;
}

string dec2bin(int i)
{
	string wynik = "";
	while (i)
	{
		if (i % 2 == 0)
		{
			wynik = "0" + wynik;
			i /= 2;
		}
		else
		{
			wynik = "1" + wynik;
			i /= 2;
		}
	}

	return wynik;
}