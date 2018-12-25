// Zaliczenie_3+_delta.cpp : DELTA
// MOGE SIE MYLIC PODCZAS PISANIA WZOROW NA SZYBKO WIEC LEPIEJ JE POSPRAWDZAC

#include "pch.h"
#include <iostream>

void liniowa(double, double);
void kwadratowa(double, double, double);

int main()
{
	using namespace std;

	double a, b, c;

	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj c: "; cin >> c;

	if (a != 0)
		kwadratowa(a, b, c);
	else
		liniowa(b, c);

	system("pause");
	return 0;
}

void liniowa(double b, double c)
{
	if (b == 0)
	{
		if (c == 0)
			std::cout << "tozsamosc" << std::endl;
		else
			std::cout << "Sprzecznosc" << std::endl;
	}
	else
	{
		if (c == 0)
			std::cout << "x = 0" << std::endl;
		else
			std::cout << "x = " << -c / b;
	}
}

void kwadratowa(double a, double b, double c)
{
	if (b == 0)
	{
		if (c == 0)
			std::cout << "x = 0";
		else
			std::cout << "x = " << sqrt(-c / a);
	}
	else
	{
		if (c == 0)
			std::cout << "x = 0" << "||" << "x = " << -b / a << std::endl;
		else
		{
			int delta = b*b - 4*a*c;
			int pdelta = sqrt(delta);

			if (delta > 0)
			{
				int x1, x2;
				x1 = -b - pdelta / 2*a;
				x2 = -b + pdelta / 2*a;

				std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
			}
			else if (delta == 0)
			{
				std::cout << "x = " << -b / 2 * a;
			}
			else
			{
				std::cout << "brak pierwiastkow rzeczywistych" << std::endl;
			}
		}
	}
}