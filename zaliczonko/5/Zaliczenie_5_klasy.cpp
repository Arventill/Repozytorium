// Zaliczenie_5_klasy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

class Klasa
{
private:
	std::string pa = "100";
	int pb = 100;
	double pc = 100.100;

	void pMetoda1()
	{
		std::cout << "\nJo³ jo³ prywatna metoda 1\n" << std::endl;
		std::cout << "Dowod:\n" << std::endl;
		std::cout << "string:\n" << pa << std::endl;
		std::cout << "int:\n" << pb << std::endl;
		std::cout << "double:\n" << pc << std::endl;
	}
	void pMetoda2()
	{
		std::cout << "\nJo³ jo³ prywatna metoda 2\n" << std::endl;
		std::cout << "Dowod:\n" << std::endl;
		std::cout << "string:\n" << pa << std::endl;
		std::cout << "int:\n" << pb << std::endl;
		std::cout << "double:\n" << pc << std::endl;
	}
	void pMetoda3()
	{
		std::cout << "\nJo³ jo³ prywatna metoda 3\n" << std::endl;
		std::cout << "Dowod:\n" << std::endl;
		std::cout << "string:\n" << pa << std::endl;
		std::cout << "int:\n" << pb << std::endl;
		std::cout << "double:\n" << pc << std::endl;
	}

public:
	std::string a = "1";
	int b = 1;
	double c = 1.1;

	void metoda1()
	{
		std::cout << "\nJo³ jo³ metoda publiczna 1:\n" << std::endl;
		std::cout << "Dowod:\n" << std::endl;
		std::cout << "string:\n" << a << std::endl;
		std::cout << "int:\n" << b << std::endl;
		std::cout << "double:\n" << c << std::endl;
		pMetoda1();
	}
	void metoda2()
	{
		std::cout << "\nJo³ jo³ metoda publiczna 2:\n" << std::endl;
		std::cout << "Dowod:\n" << std::endl;
		std::cout << "string:\n" << a << std::endl;
		std::cout << "int:\n" << b << std::endl;
		std::cout << "double:\n" << c << std::endl;
		pMetoda2();
	}
	void metoda3()
	{
		std::cout << "\nJo³ jo³ metoda publiczna 3:\n" << std::endl;
		std::cout << "Dowod:\n" << std::endl;
		std::cout << "string:\n" << a << std::endl;
		std::cout << "int:\n" << b << std::endl;
		std::cout << "double:\n" << c << std::endl;
		pMetoda3();
	}
};

int main()
{
	setlocale(LC_ALL, "");

	Klasa k1;
	k1.metoda1();
	k1.metoda2();
	k1.metoda3();

	system("pause");
	return 0;
}