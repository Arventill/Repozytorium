// Zaliczenie_5_dopisanieDoPliku.cpp : wy�wietla dane z pliku i dopisuje co� do niego

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

		std::cout << "\n\nJo� jo� tw�j plik zawiera:\n\n";
		while (!plik.eof())
		{
			plik >> s;
			std::cout << s << '\n';
		}

		std::cout << "Dodaj co� od siebie ('/' ko�czy dzia�anie programu): ";
		std::getline(std::cin, theChoosenOne);
		if (theChoosenOne != "/")
			oplik << '\n' << theChoosenOne;
		else
			break;
	}
		
	system("pause");
	return 0;
}