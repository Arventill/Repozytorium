// Podstawy programowania 10.cpp : co 10 slowo pliku 1 do pliku 2

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;

	ifstream iplik("plik.txt");
	ofstream oplik("plik2.txt");
	string s;

	int i = 1;
	while (!iplik.eof())
	{
		iplik >> s;
		if (i % 10 == 0)
		{
			oplik << s << "\n";
		}
		i++;
	}
	system("pause");
	return 0;
}