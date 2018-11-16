// Stos.cpp : Type - LIFO

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <exception>

const int ELEMENTS = 10;
int CURRENT = 0;
int t[ELEMENTS];

void menu();
void push();
void pull();
void show();

int main()
{
	using std::cin;
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
	using std::cout;
	using std::endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // 11, 10, 6

	cout << "Co chcesz zrobic?" << endl;
	cout << "-------------------------" << endl;
	cout << "Dodaj element do stosu\t\t[1]" << endl;
	cout << "Zdejmij element ze stosu\t[2]" << endl;
	cout << "Wyświetl stan stosu\t\t[3]" << endl;
	cout << "Zakoncz dzialanie\t\t[4]" << endl;
	cout << "-------------------------" << endl;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

void push()
{
	using std::cout;
	using std::endl;
	using std::cin;

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
	using std::cout;
	using std::endl;

	if (t[0] == NULL)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "Stos jest pusty, nie ma czego zdjac!" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		return;
	}

	if (CURRENT == 10)
		CURRENT = 9;

	t[CURRENT] = NULL;
	CURRENT = CURRENT - 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "Zdjeto " << CURRENT + 2 << " element ze stosu" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	
}

void show()
{
	using std::cout;
	using std::endl;

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