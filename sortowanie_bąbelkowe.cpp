// sortowanie_bąbelkowe.cpp : 

#include "pch.h"
#include <iostream>
#include <fstream>

const int ELEMENTS = 4;
int t[ELEMENTS];

void fill_tab()
{
	using namespace std;
	ifstream plik("dane.txt");
	if (!plik)
	{
		cout << "404\tBrak dostępu do pliku" << endl;
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
	using namespace std;
	for (int i = 0; i < ELEMENTS; i++)
	{
		cout << t[i] << endl;
	}
}

int main()
{
	using namespace std;
	int counting = 0;

	fill_tab();
	do
	{
		for (int i = 0; i < ELEMENTS - 1; i++)
		{
			if (t[i] > t[i + 1])
				swap(t[i], t[i + 1]);
			counting++;
		}
	} while (counting != ELEMENTS);
	show_tab();

	return 0;
}