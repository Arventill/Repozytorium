// Podstawy programowania 3.cpp : Ulamek (10) --> ulamek (2)

#include "pch.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string total_dec2bin(int);
string fraction_dec2bin(int);

int main()
{
	int argA, argB;
	char oper;
	string a, b;

	cout << "Podaj liczbe w ulanku dziesietnym: "; cin >> argA >> oper >> argB;
	a = total_dec2bin(argA);
	b = fraction_dec2bin(argB);

	cout << endl << "Twoj ulamek to binarnie: " << a << "," << b << endl;
	system("pause");
	return 0;
}

string total_dec2bin(int i)
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
string fraction_dec2bin(int i)
{
	double ii = (double)i;
	string w = "";
	while (ii >= 1)
		ii /= 10;
	while (ii)
	{
		if (ii * 2 < 1)
		{
			w += "0";
			ii = ii * 2;
		}
		else
		{
			w += "1";
			ii = ii * 2 - 1;
		}
	}
	return w;
}