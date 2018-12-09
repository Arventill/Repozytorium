// Podstawy Programowania 5.cpp : Operacje na bitach

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <limits.h>

using std::cout;
using std::endl;

int los(long long);
void andd(unsigned, unsigned);
void orr(unsigned);
void xorr(unsigned);
std::string neg(unsigned); //nie chce mi siê kombinowaæ z 2 liczbami, niech zwraca po prostu wynik 1 a potem 2 liczby

int main()
{
	using std::string;

	srand(time(NULL));

	unsigned int maxIntUnsigned = _CRT_INT_MAX * 2 + 1; // _CRT_INT_MAX - jest to najwieksza wartosc inta --> wiêc najwiêksz¹ wartoœci¹ dla unsigned inta jest _CRT_INT_MAX * 2 + 1 (+1 bo dodajemy zero do naszych obliczeñ)
	unsigned x; //deklarujemy sobie x bez znaku (-)
	unsigned y; //jak wy¿ej
	string resultForX, resultForY; //wyniki negacji dla x i y bêd¹ lecia³y tutej ino :P

	x = los(maxIntUnsigned); //losujemy liczbe z zakresu 0-MAX wyliczony wy¿ej
	y = los(maxIntUnsigned); //same here
	cout << x << endl; //zobaczmy sobie co nam wylosowalo w X
	cout << y << endl; //zobaczmy sobie co nam wylosowalo w Y

	andd(x, y); //koniunkcja
	orr(x | y); //alternatywa bitowa --> pokazalem tutaj 2 sposob zapisywania dzialan na bitach
	xorr(x ^ y); //xor

	resultForX = neg(x); //negacja x
	resultForY = neg(y); //negacja y

	cout << endl << endl << "~X" << endl << endl;
	cout << resultForX;
	cout << endl << endl << "~Y" << endl << endl;
	cout << resultForY;

	cout << endl << endl;
	system("pause");
	return 0;
}

int los(long long MAX) //long long bo jest to najwieksza mo¿liwa do osi¹gniêcia liczba. Nie bêdziemy losowaæ liczb poza zakresem wiêc przeœlemy tutaj NAJWIÊKSZ¥ mo¿liw¹ do wylosowania liczbê
{
	return rand() % MAX + 0;
}

void andd(unsigned x, unsigned y)
{
	cout << endl << endl;
	cout << "X & Y" << endl << endl;
	for (unsigned i = 32768; i > 0; i >>= 1) //32 768 to bitowo 1000 0000 0000 0000 --> i>>=1 przesuwa bit w prawo
	{
		if (x&y&i) //je¿eli x == 1, y == 1, i == 1
			cout << "1"; //pisz 1
		else
			cout << "0";
	}
}
void orr(unsigned x)
{
	cout << endl << endl;
	cout << "X | Y" << endl << endl;
	for (unsigned i = 32768; i > 0; i >>= 1)
	{
		if (x & i)
			cout << "1";
		else
			cout << "0";
	}
}
void xorr(unsigned x)
{
	cout << endl << endl;
	cout << "X ^ Y" << endl << endl;
	for (unsigned i = 32768; i > 0; i >>= 1)
	{
		if (x&i)
			cout << "1";
		else
			cout << "0";
	}
}
std::string neg(unsigned u)
{
	std::string result = "";
	for (int i = 32768; i > 0; i >>= 1)
	{
		if (u&i)
			result = result + "0";
		else
			result = result + "1";
	}
	return result;
}