// Zaliczenie_5_dopisanieDoPliku.cpp : wyœwietla dane z pliku i dopisuje coœ do niego

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	setlocale(LC_ALL, "");

	std::string s;
	std::string theChoosenOne;
	
	while (true)
	{
		std::fstream plik("data.txt");
		std::ofstream oplik("data.txt", std::ios::app);

		std::cout << "\n\nJo³ jo³ twój plik zawiera:\n\n";
		while (!plik.eof())
		{
			plik >> s;
			std::cout << s << '\n';
		}

		std::cout << "Dodaj coœ od siebie ('/' koñczy dzia³anie programu): ";
		std::getline(std::cin, theChoosenOne);
		if (theChoosenOne != "/")
			oplik << '\n' << theChoosenOne;
		else
			break;
	}
		
	system("pause");
	return 0;
}