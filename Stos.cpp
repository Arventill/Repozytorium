// Stos.cpp : Type - LIFO

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <exception>

using std::cin;
using std::cout;
using std::endl;

const int ELEMENTS = 10;
int CURRENT = 10;
int t[ELEMENTS]{ 1,2,3,4,5,6,7,8,9,10 };

void menu();
void push();
void pull();
void show();

int main()
{
	system("CLS");

	while (true)
	{
		menu();
		char wybor;
		cin >> wybor;

		switch (wybor)
		{
		case 49: //1 == 49 w ASCII
		{
			push();
			break;
		}
		case 50: //2 == 50 w ASCII
		{
			pull();
			break;
		}
		case 51: //3 == 51 w ASCII
		{
			show();
			break;
		}
		case 52:
		{
			exit(0);
			break;
		}
		default:
			break;
		}
	}
	return 0;
}

void menu()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 11, 10, 6

	cout << "Co chcesz zrobic?" << endl;
	cout << "-------------------------" << endl;
	cout << "Dodaj element do stosu\t\t[1]" << endl;
	cout << "Zdejmij element ze stosu\t[2]" << endl;
	cout << "Wyswietl stan stosu\t\t[3]" << endl;
	cout << "Zakoncz dzialanie\t\t[4]" << endl;
	cout << "-------------------------" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void push()
{
	int elem;
	do
	{
		if (CURRENT > 9)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "Nie mozesz dodac juz wiecej elementow!" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			break;
		}

		while (t[CURRENT] != NULL)
			CURRENT++;

		cout << "Podaj " << CURRENT + 1 << " element: " << endl;
		cin >> elem;
		if (cin.good() == 0)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			break;
		}
		t[CURRENT] = elem;
		CURRENT++;
	} while (CURRENT <= 9);
}

void pull()
{
	if (t[0] == NULL)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "Stos jest pusty, nie ma czego zdjac!" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		return;
	}

	if (CURRENT == 10)
		CURRENT--;

	t[CURRENT] = NULL;
	CURRENT--;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "Zdjeto " << CURRENT + 2 << " element ze stosu" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
}

void show()
{
	if (t[0] == NULL)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "Stos jest pusty!" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout << endl << "ELEMENTY STOSU:" << endl << endl;
		int i = 0;
		do
		{
			cout << t[i] << ", ";
			i++;
		} while (t[i] != NULL);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << endl;
	}
}