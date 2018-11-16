// sortowanie_wstawianie.cpp : 

#include "pch.h"
#include <iostream>
#include <fstream>

const int ELEMENTS = 10;
int t[ELEMENTS];

void fill_tab();
void show_tab();

int main()
{
	using std::swap;

	fill_tab();

	int counting = 0;
	int iteration;
	do
	{
		int temp = 100;
		for (int i = counting; i < ELEMENTS; i++)
		{
			if (t[i] < temp)
			{
				temp = t[i];
				iteration = i;
			}
		}
		if (t[iteration] < t[counting])
		{
			swap(t[iteration], t[counting]);
			counting++;
			iteration = 0;
		}
		else
		{
			counting++;
			iteration = 0;
		}
	} while (counting != ELEMENTS);
	
	show_tab();
	return 0;
}

void fill_tab()
{
	using std::cout;
	using std::endl;
	using std::ifstream;

	ifstream plik("dane.txt");
	if (!plik)
	{
		cout << "404\tbrak dostępu do pliku" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < ELEMENTS; i++)
		{
			plik >> t[i];
		}
	}
}

void show_tab()
{
	using std::cout;
	using std::endl;
	using std::ifstream;

	ifstream plik("dane.txt");
	if (!plik)
	{
		cout << "404\tbrak dostępu do pliku" << endl;
		return;
	}
	else
	{
		for (int i = 0; i < ELEMENTS; i++)
		{
			cout << t[i] << endl;
		}
	}
}