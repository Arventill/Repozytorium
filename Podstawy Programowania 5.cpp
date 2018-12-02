// Podstawy Programowania 5.cpp : Operacje na bitach

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

const int ELEM = 10;

int los();
std::string andd(int [], int []);
std::string orr (int [], int []);
std::string xorr(int [], int []);
std::string neg(int []);

int main()
{
	srand(time(NULL));
	//declaring
	int a[ELEM], b[ELEM];
	std::string result;
	std::string result2;

	//input
	for (int i = 0; i < ELEM; i++)
	{
		a[i] = los();
	}
	for (int i = 0; i < ELEM; i++)
	{
		b[i] = los();
	}

	//output a[] and b[]
	for (int i = 0; i < ELEM; i++)
	{
		std::cout << a[i] << " ";
	}std::cout << std::endl;
	for (int i = 0; i < ELEM; i++)
	{
		std::cout << b[i] << " ";
	}std::cout << std::endl;

	//Neg and output
	result = neg(a);
	result2 = neg(b);
	std::cout << result << std::endl;
	std::cout << result2 << std::endl;

	system("pause");
	return 0;
}

int los()
{
	return rand() % 2 + 0;
}

std::string andd(int t[], int t2[])
{
	std::string result="";
	for (int i = 0; i <= ELEM - 1; i++)
	{
		if (t[i] == (int)1 && t2[i] == (int)1)
			result += '1';
		else
			result += '0';
	}
	return result;
}

std::string orr (int t[], int t2[])
{
	std::string result = "";
	for (int i = 0; i <= ELEM - 1; i++)
	{
		if (t[i] == (int)0 && t2[i] == (int)0)
			result += '0';
		else
			result += '1';
	}
	return result;
}

std::string xorr(int t[], int t2[])
{
	std::string result = "";
	for (int i = 0; i <= ELEM - 1; i++)
	{
		if (t[i] != t2[i])
			result += '1';
		else
			result += '0';
	}
	return result;
}

std::string neg(int t[])
{
	std::string result = "";
	for (int i = 0; i <= ELEM - 1; i++)
	{
		if (t[i] == (int)1)
			result += '0';
		else
			result += '1';
	}
	return result;
}