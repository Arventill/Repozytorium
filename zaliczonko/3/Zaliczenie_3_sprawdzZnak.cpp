// Zaliczenie_3_sprawdzZnak.cpp : Ludü sprawdza czy wprowadzony znak jest litera (mala/duza), czy cyfra.

#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	char wybor;

	cout << "Podaj znak: "; cin >> wybor;
	if (wybor >= 97 && wybor <= 122)
		cout << "MALA LITERA!" << endl;
	else if (wybor >= 65 && wybor <= 90)
		cout << "DUZA LITERA!" << endl;
	else if (wybor >= 48 && wybor <= 57)
		cout << "CYFRA!" << endl;
	else
		cout << "JA JUZ KURWA NWM CO TO JEST XDDDD" << endl;

	system("pause");
	return 0;
}