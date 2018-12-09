// Podstawy programowania 7.cpp : Operacje na bitach --> w³¹czanie, wy³¹czanie, odwracanie...

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

void premade(int &, short &);
void biton(int &, short &);
void bitoff(int &, short &);
void spin(int &, short &);
void bitcheck(int &, short &);

int main()
{
	srand(time(NULL));
	int iliczba = rand() % 1000 + 1;
	short ibit;

	premade(iliczba, ibit);
	std::cout << "\n\nPodaj nr bitu ktory chcesz wlaczyc: "; std::cin >> ibit;
	biton(iliczba, ibit);
	std::cout << "\nPodaj nr bitu ktory chcesz wylaczyc: "; std::cin >> ibit;
	bitoff(iliczba, ibit);
	std::cout << "\nPodaj nr bitu ktory chcesz zmienic: "; std::cin >> ibit;
	spin(iliczba, ibit);
	std::cout << "\nPodaj nr bitu ktory chcesz sprawdzic (bo mi nie ufasz): "; std::cin >> ibit;
	bitcheck(iliczba, ibit);

	std::cout << std::endl << std::endl;
	system("pause");
}


void premade(int & iliczba, short & ibit)
{
	int licznik = 0;
	std::cout << "Przed zamianami:\n";
	for (unsigned i = 32768; i > 0; licznik++, i >>= 1)
	{
		if (licznik == 4 || licznik == 8 || licznik == 12 || licznik == 16 || licznik == 20 || licznik == 24 || licznik == 28 || licznik == 32)
		{
			std::cout << " ";
		}
		if (iliczba & i)
			std::cout << "1";
		else
			std::cout << "0";
	}
}
void biton(int & iliczba, short & ibit)
{
	iliczba |= 1UL << ibit - 1;
	int licznik = 0;

	std::cout << "\nPo wlaczeniu:\n";
	for (unsigned i = 32768; i > 0; licznik++, i >>= 1)
	{
		if (licznik == 4 || licznik == 8 || licznik == 12 || licznik == 16 || licznik == 20 || licznik == 24 || licznik == 28 || licznik == 32)
		{
			std::cout << " ";
		}
		if (iliczba & i)
			std::cout << "1";
		else
			std::cout << "0";
	}
}
void bitoff(int & iliczba, short & ibit)
{
	iliczba &= ~(1UL << ibit - 1);
	int licznik = 0;

	std::cout << "\nPo wylaczeniu:\n";
	for (unsigned i = 32768; i > 0; licznik++, i >>= 1)
	{
		if (licznik == 4 || licznik == 8 || licznik == 12 || licznik == 16 || licznik == 20 || licznik == 24 || licznik == 28 || licznik == 32)
		{
			std::cout << " ";
		}
		if (iliczba & i)
			std::cout << "1";
		else
			std::cout << "0";
	}
}
void spin(int & iliczba, short & ibit)
{
	iliczba ^= 1UL << ibit - 1;
	int licznik = 0;

	std::cout << "\nPo wylaczeniu:\n";
	for (unsigned i = 32768; i > 0; licznik++, i >>= 1)
	{
		if (licznik == 4 || licznik == 8 || licznik == 12 || licznik == 16 || licznik == 20 || licznik == 24 || licznik == 28 || licznik == 32)
		{
			std::cout << " ";
		}
		if (iliczba & i)
			std::cout << "1";
		else
			std::cout << "0";
	}
}
void bitcheck(int & iliczba, short & ibit)
{
	bool what;
	what = (iliczba >> ibit - 1) & 1UL;
	std::cout << what;
}