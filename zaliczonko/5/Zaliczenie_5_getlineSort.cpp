// Zaliczenie_5_getlineSort.cpp : Getline 5 string�w i b�belkowe posortowanie

#include "pch.h"
#include <iostream>
#include <string>

bool sort(std::string &s1, std::string &s2)
{
	int dl = s1.length();

	for (int i = 0; i < dl; i++)
	{
		if (s1[i] > s2[i])
		{
			return true;
		}
		else
			return false;
	}

}

int main()
{
#pragma region Usings
	using std::string;
	using std::getline;
	using std::cin;
	using std::cout;
	using std::endl;
#pragma endregion

	setlocale(LC_ALL, "C.UTF-8");

	string s[5];

	for (int i = 0; i < 5; i++)
	{
		getline(cin, s[i]);
	}

	for (int i = 0; i < 4; i++) //�eby nie sprawdza�o stringa s[5] bo tablica by musia�a mie� 6 element�w
	{
		bool isChanged = sort(s[i], s[i + 1]);
		if (isChanged == true)
		{
			swap(s[i], s[i + 1]);
			i = -1; //zgodnie z funkcj� nast�puje i++, wi�c i == -1, po czym nast�puje inkrementacja i tak oto lecimy od nowa
		}
	}

	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << s[i] << "\n";
	}

	system("pause");
	return 0;
}