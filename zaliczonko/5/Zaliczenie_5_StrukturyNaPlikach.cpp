// Zaliczenie_5_StrukturyNaPlikach.cpp : podstawowa struktura do pliku
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>

struct Human
{
	std::string name;
	std::string lastName;
	int age;

	void out()
	{
		std::cout << "\n\nImiê: " << name << "\n";
		std::cout << "Nazwisko: " << lastName << "\n";
		std::cout << "Wiek: " << age << "\n\n";
	}
	void in()
	{
		std::cout << "Imie: "; std::cin >> name;
		std::cout << "Nazwisko: "; std::cin >> lastName;
		std::cout << "Wiek: "; std::cin >> age;
	}
};

int main()
{
	using namespace std;
	setlocale(LC_ALL, "");

	ifstream ifile("data.txt");
	ofstream ofile("data.txt", ios::app);

	string s;

	while (!ifile.eof())
	{
		getline(ifile, s);
		cout << s << endl;
	}

	cout << "Dodaj coœ od siebie: \n";
	Human h1;
	h1.in();
	ofile << "\n" << h1.name << "\t" << h1.lastName << "\t" << h1.age;

	return 0;
}